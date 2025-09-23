def resolve(clause1, clause2):
    for literal in clause1:
        if ('~' + literal) in clause2:
            new_clause = (clause1 - {literal}) | (clause2 - {'~' + literal})
            return new_clause
        if literal.startswith('~') and literal[1:] in clause2:
            new_clause = (clause1 - {literal}) | (clause2 - {literal[1:]})
            return new_clause
    return None

# Example knowledge base (set of clauses)
knowledge_base = [
    {'A', 'B'},         # A ∨ B
    {'~A', 'C'},        # ¬A ∨ C
    {'~B', 'D'},        # ¬B ∨ D
    {'~C'},             # ¬C
]

# Resolution process
def resolution(kb):
    new = set()
    while True:
        pairs = [(kb[i], kb[j]) for i in range(len(kb)) for j in range(i+1, len(kb))]
        for (ci, cj) in pairs:
            resolvent = resolve(ci, cj)
            if resolvent is not None:
                print(f"Resolving {ci} and {cj} => {resolvent}")
                if not resolvent:  # Empty clause found
                    print("Contradiction found (empty clause).")
                    return True
                new.add(frozenset(resolvent))
        if new.issubset(set(map(frozenset, kb))):
            print("No new clauses. Resolution ends.")
            return False
        for clause in new:
            if set(clause) not in kb:
                kb.append(set(clause))

resolution(knowledge_base)