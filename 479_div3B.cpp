/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> freq;

    for (int i = 0; i < n - 1; ++i) {
        string an= s.substr(i, 2);
        freq[an]++;
    }

    int mx=0;
    string result;

    for (auto &it : freq)
    {
        if (it.second > mx)
        {
            mx= it.second;
            result = it.first;
        }
    }

    cout << result << endl;

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int res=0;
    string ans;
    for(int i=0;i<n-1;i++)
    {
        int cn=0;
        for(int j=0;j<n-1;j++)
        {
            if(s[i]==s[j]&&s[i+1]==s[j+1])
            {
                cn++;
                if(res<cn)
                {
                    res=cn;
                    ans=string(1,s[i])+string(1,s[i+1]);
                }
            }
        }
    }
    cout<<ans<<endl;
}

