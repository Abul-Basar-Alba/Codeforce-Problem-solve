/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, X;
    cin >> N >> X;

    int b= N * 26;
    int n= (X - 1) / N;
    int pos= (X - 1) % N;

    char result ='A'+n;
    result += pos;

    cout << result << endl;

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
     int n,x;
     cin>>n>>x;
     int a=(x+n-1)/n;
     cout<<s[a-1]<<endl;
    return 0;
}



