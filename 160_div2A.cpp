/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0;

        string x=" ";
        x.push_back(s[0]);
        int a=0;
        for(int i=1;i<(s.size()/2);i++)
        {
            x.push_back(s[i]);
           if(s[i]>0)
           {
             c++;
             a=i;
             x.erase(x.begin() + i);
             break;
           }
        }
        string y=" ";
        for(int i=a;i<s.size();i++)
        {
          y.push_back(s[i]);
        }
        int d=stoi(x);
        int e=stoi(y);

        if(s[0]=='0'||c==0||d>=e)
        {
            cout<<-1<<endl;

        }
        else
        {
            cout<<d<<' '<<e<<endl;
        }

    }
}*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        bool found = false;

        for (int lenA = 1; lenA <= n / 2; lenA++) {
            string a_str = s.substr(0, lenA);
            if (a_str[0] == '0' || stoi(a_str) == 0) continue;

            string b_str = s.substr(lenA);
            int a = stoi(a_str);
            int b = stoi(b_str);

            if (b_str[0] == '0' || b <= a) continue;

            cout << a << ' ' << b << endl;
            found = true;
            break;
        }

        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
