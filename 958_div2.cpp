//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n,k;
//        cin>>n>>k;
//        if(n==1)
//            cout<<0<<endl;
//        else if(n<=k)
//            cout<<1<<endl;
//        else
//        {
//            ll ans=0;
//          while(n!=1)
//          {
//              ll tem=k-1;
//              while(tem!=0)
//              {
//                  if(n==0)
//                    break;
//                  n-=1;
//                  tem--;
//              }
//              ans++;
//              if(n==0)
//                break;
//          }
//          cout<<ans<<endl;
//        }
//    }
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		int n,k;
//		scanf("%d%d",&n,&k);
//		if(n==1)puts("0");
//		else printf("%d\n",(n-2)/(k-1)+1);
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n;
//        cin>>n;
//        string s;
//        cin>>s;
//        ll c0=0,c1=0;
//        for(int i=0;i<n;i++)
//        {
//            if(s[i]=='0')
//                c0++;
//            else
//                c1++;
//        }
//        if(c1>c0)
//        {
//            cout<<"YES\n";
//            continue;
//        }
//        string res="";
//        bool f=false;
//        for(int i=0;i<n;i++)
//        {
//            if(s[i]=='0'&&f==false)
//            {
//                f=true;
//            }
//            if(s[i]=='1'&&f==true||s[i]=='0'&&i==n-1&&f==true)
//            {
//                res+='0';
//                f=false;
//            }
//            if(s[i]=='1')
//                res+='1';
//        }
//        ll cn1=0,cn2=0;
//        for(int i=0;i<res.size();i++)
//        {
//          if(res[i]=='1')
//                cn1++;
//          else
//              cn2++;
//        }
//        if(cn1>cn2)
//            cout<<"YES\n";
//        else
//            cout<<"NO\n";
//    }
//}



#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll tem = n;
        vector<ll> res;

        vector<ll> b;
        while (n > 0)
        {
            b.push_back(n % 2); 
            n /= 2;            
        }

        //reverse(b.begin(), b.end());

        n = tem;

        if (__builtin_popcountll(n) == 1)
        {
            cout << 1 << endl; 
            cout << n << endl;
        }
        else
        {
            for (int i = 0; i < b.size(); i++)
            {
                if (b[i] == 1) 
                {
                    ll value = n - (1LL << i);
                    res.push_back(value);
                }
            }
            res.push_back(n); 

            sort(res.begin(), res.end());

            cout << res.size() << endl;
            for (ll c : res)
                cout << c << " ";
            cout << endl;
        }
    }
    return 0;
}
