/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
   ll t;
   cin>>t;
   //ll a[t],b[t];
   vector<int>a(t),b(t);
   for(ll i=0,j=0;i<t;i++,j++)
   {
       cin>>a[i]>>b[j];
       a.push_back(i);
       b.push_back(j);
   }
   int az=count(a.begin(),a.end(),0);
   int aon=cout(a.begin(),a.end(),1);

    int bz=count(b.begin(),b.end(),0);
   int bon=cout(b.begin(),b.end(),1);
   if(az>=aon&&bz<=bon)
    cout<<aon+bz<<endl;
   else if(az<=aon&&bz>=bon)
    cout<<az+bon<<endl;
   else if(az>aon&&bz>bon)
    cout<<aon+bon<<endl;
   else if(az<aon&&bz<bon)
    cout<<az+bz<<endl;
    /*for (ll i = 0,j=0; i < t; i++,j++)
    {
        cout << a[i] << " " << b[j] << "\n";
    }*/

#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main() {
   ll t;
   cin >> t;
   vector<int> a(t), b(t);

   for (ll i = 0; i < t; i++) {
       cin >> a[i] >> b[i];
   }

   int az = count(a.begin(), a.end(), 0);
   int aon = count(a.begin(), a.end(), 1);

   int bz = count(b.begin(), b.end(), 0);
   int bon = count(b.begin(), b.end(), 1);

   if (az >= aon && bz <= bon)
       cout << aon + bz << endl;
   else if (az <= aon && bz >= bon)
       cout << az + bon << endl;
   else if (az > aon && bz > bon)
       cout << aon + bon << endl;
   else if (az < aon && bz < bon)
       cout << az + bz << endl;
}

