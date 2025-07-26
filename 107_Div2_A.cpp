#include<bits/stdc++.h>
//#define ll ll int
using namespace std;
int main()
{
    int n,k,l,c,d,p,ml,mp;
    cin>>n>>k>>l>>c>>d>>p>>ml>>mp; //Soda will be enough for gas = (K * L) / (N * l) toasts.
      int gas,laim,sol;
      gas=(k*l)/(n*ml);
      laim=(c*d)/n;
      sol=p/(mp*n);
      cout<<min(gas,min(laim,sol))<<endl;                              //Limes will last for laim=(C*D)/N toasts.
    /*int drink,lime,slat;             //Salt is enough for sol=P/(p*N) toasts.
    drink=(k*l)/n;                    //Total result: res=min(gas,laim,sol).
    lime=(l*c);
    slat=p/mp;
    cout<<min(drink,min(lime,slat))/n<<endl;*/
}


