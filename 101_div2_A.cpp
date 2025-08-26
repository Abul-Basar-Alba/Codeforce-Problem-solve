#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string tem;
    tem=s1+s2;
    sort(s3.begin(),s3.end());
    sort(tem.begin(),tem.end());
    if(s3==tem)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    //cout<<tem<<endl;
}
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string tem = s1 + s2;

    unordered_map<char, int> freq;

    for (char c : tem)
    {
        freq[c]++;
    }

    for (char c : s3)
    {
        if (freq.find(c) != freq.end() && freq[c] > 0)
        {
            freq[c]--;
        }
       else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    for (const auto &pair : freq)
    {
        if (pair.second > 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}*/
