
values = [True, False]
print("\nAddition Truth Table:\n")
print("P\tQ\tConclusion P∨Q")

for P in values:
    for Q in values:
        disjunction = P or Q
        print(f"{P}\t{Q}\t{disjunction}")
