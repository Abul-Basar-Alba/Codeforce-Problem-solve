#include <bits/stdc++.h>
using namespace std;
using ll = ll;
int n;

struct info
{
     int marks;
     string name;
     int birth_year;
     int id;
};

bool cmp(info A, info B)
{
     if (A.marks > B.marks)
          return true;
     if (A.marks == B.marks)
     {
          if (A.name.size() > B.name.size())
               return true;
          if (A.name.size() == B.name.size())
          {
               if (A.birth_year < B.birth_year)
                    return true;
               if (A.birth_year == B.birth_year)
               {
                    if (A.id < B.id)
                         return true;
               }
          }
     }
     return false;
}

void Solve()
{
     cin >> n;
     vector<info> vec(n);
     for (int i = 0; i < n; i++)
     {
          info tmp;
          cin >> tmp.marks >> tmp.name >> tmp.birth_year >> tmp.id;
          vec[i] = tmp;
     }
     sort(vec.begin(), vec.end(), cmp);
     for (auto u : vec)
     {
          cout << u.marks << " " << u.name << " " << u.birth_year << " " << u.id << '\n';
     }
}

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int tests = 1;
     // n >> tests;
     for (int T = 1; T <= tests; T++)
          Solve();
     return 0;
}