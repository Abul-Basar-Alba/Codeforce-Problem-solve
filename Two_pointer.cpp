//Question 01
//Find the pair whose sum is equal to x and print this value or print this value index.
/*example:
    n=5
1 2 3 4 5
x=9 if x=10 given ans NO */

/*#include<bits/stdc++.h>
using namespace std;
int val1,val2;
bool solve(int a[],int x,int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int sum=a[i]+a[j];
        if(sum==x)
        {
            val1=a[i];
            val2=a[j];
            return true;
        }
        if(sum>x)j--;
        else
            i++;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int x;
    cin>>x;
    bool ans=solve(a,x,n);
    if(ans==true)
    {
        cout<<"YES"<<endl;
        cout<<val1<<" "<<val2<<endl;
    }
    else
        cout<<"NO\n";
}*/
// Question 02.
//Find the pair in Array Whose sum is closest to X
/*example: n=5
        1 3 4 7 10
        x=15 ans given pair (4,10) because this is closest value */
/*#include<bits/stdc++.h>
using  namespace  std;
void solve(int ar[],int n, int x)
{
    int i=0;
    int j=n-1;
    int ind1,ind2;
    int dif=INT_MAX;
    while(i<j)
    {
        int sum=ar[l]+ar[r];
        if(abs(sum-x)<dif)
        {
            ind1=i;
            ind2=j;
            dif=abs(sum-x);
        }
        if(sum>x)j--;
        else i++;
    }
    cout<<"("<<ar[ind1]<<" "<<ar[ind2]<<")  = "<< ar[ind1]+ar[ind2]<<endl;
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    sort(ar,ar+n);
    int x;
    cin>>x;
    solve(ar,n,x);
}*/
//Question 03.
//Find the closest pair from two sorted arrays
/*Example: n=5
        1 2 3 4 5
        m=5
       5 6 7 8 9 10
       x=16 ans given pair (5,10) because this is closest value */
/*#include<bits/stdc++.h>
using  namespace  std;
void solve(int ar[],int br[], int n,int m, int x)
{
    int ind1,ind2,l,r;
    l=0;
    r=m-1;
    int dif=INT_MAX;
    while(l<n && r>=0)
    {
        int sum=ar[l]+br[r];
        if(abs(sum-x)<dif)
        {
            ind1=l;
            ind2=r;
            dif=abs(sum-x);
        }
        if(sum>x)r--;
        else l++;
    }
    cout<<"( "<<ar[ind1]<<" , "<<br[ind2]<<" ) = "<<ar[ind1]+br[ind2]<<endl;
}
int main()
{
    int n,m,x;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];

    cin>>m;
    int br[m+3];
    for(int i=0;i<m;i++)cin>>br[i];

    cin>>x;

    solve(ar,br,n,m,x);
}*/
//Question 04.
//Find all triplets with zero sum . how much triplets sum zero (triplets sum means 3 value sum)
/*Example: n=6
        1 -1 0 2 -2 3
        ans given 3 pair sum is zero*/
// 1st solution boots force implementation  time complexity N^3.this is not batter approach.
/*#include<bits/stdc++.h>
using  namespace  std;
void solve(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(ar[i]+ar[j]+ar[k]==0)
                    cout<<"("<<ar[i]<<","<<ar[j]<<","<<ar[k]<<")"<<endl;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    solve(ar,n);
}*/
// 2nd approach using unordered set and time complexity N^2.and this is batter approach.
/*#include<bits/stdc++.h>
using  namespace  std;
void solve(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        unordered_set<int>s;
        for(int j=i+1;j<n;j++)
        {
            int x = -(ar[i]+ar[j]);
            if(s.find(x)!=s.end())
            {
                cout<<"("<<x<<","<<ar[i]<<","<<ar[j]<<")"<<endl;
            }
            else{
                s.insert(ar[j]);
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    solve(ar,n);
}*/
// Question 05.
//Find a triplet that sum to a given value x or print yes no
/*example: n=6
      1 2 4 6 3 0
      ans given 3 elements sum x or how much triplet */
// 1st approach boots force solution implementation  time complexity N^3.this is not batter approach.
/*#include<bits/stdc++.h>
using  namespace  std;
void solve(int ar[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(ar[i]+ar[j]+ar[k]==x)
                    cout<<"("<<ar[i]<<","<<ar[j]<<","<<ar[k]<<")"<<endl;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    int x;
    cin>>x;
    solve(ar,n,x);
}*/
// 2nd approach using unordered set and time complexity N^2.and this is batter approach.
/*#include<bits/stdc++.h>
using  namespace  std;
void solve(int ar[],int n,int x)
{
    int aa=0;
    for(int i=0;i<n;i++)
    {
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            int sum=ar[i]+ar[l]+ar[r];
            if(sum==x)
            {
                cout<<"("<<ar[i]<<","<<ar[l]<<","<<ar[r]<<")"<<endl;
                aa=1;
            }
            if(sum>x)r--;
            else l++;
        }
    }
    if(aa==0)cout<<"Triplet is not Found"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    int x;
    cin>>x;
    solve(ar,n,x);
}*/
//Question 06;
//Find four elements that sum to a given value x
/*example: n=9
  2 2 4 4 6 6 8 8 0
      x=16
      ans given 4 value sum equal x or how much sequence*/
// 1st approach boots force solution implementation  time complexity N^4.this is not batter approach.
/*#include<bits/stdc++.h>
using  namespace  std;
void solve(int ar[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                   if(ar[i]+ar[j]+ar[k]+ar[l]==x)
                    cout<<"("<<ar[i]<<","<<ar[j]<<","<<ar[k]<<","<<ar[l]<<")"<<endl;
                }
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    int x;
    cin>>x;
    solve(ar,n,x);
}*/
// 2nd approach using unordered set and time complexity N^3.and this is batter approach.
/*#include<bits/stdc++.h>
using  namespace  std;
void solve(int ar[],int n,int x)
{
    int aa=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        int l=j+1;
        int r=n-1;
        while(l<r)
        {
            int sum=ar[i]+ar[j]+ar[l]+ar[r];
            if(sum==x)
            {
                cout<<"("<<ar[i]<<","<<ar[j]<<","<<ar[l]<<","<<ar[r]<<")"<<endl;
                aa=1;
            }
            if(sum>x)r--;
            else l++;
        }
        }
    }
    if(aa==0)cout<<"Triplet is not Found"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    int x;
    cin>>x;
    solve(ar,n,x);
}*/
/*#include<bits/stdc++.h>
using namespace std;
void solve(int ar[],int n)
{
  for(int i=n-1;i>=0;i--)
  {
      int x=ar[i];
      int l=0;
      int r=i-1;
      while(l<r)
      {
          int sum=ar[l]+ar[r];
          if(sum==x)
          {
              cout<<"("<<x<<","<<ar[l]<<","<<ar[r]<<")"<<endl;
              return;
          }
          if(sum>x)r--;
          else l++;
      }
  }
  cout<<"No value"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    solve(ar,n);
}*/
//F. Eating Candies
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
void solve(ll a[],ll n)
{
    ll sum1=0,sum2=0,ans=0;
    ll cn1=0,cn2=0;
    int l=1;
    int r=n;
    while(l<=r)//two pointer
    {
        if(sum1<sum2)
        {
            sum1+=a[l];
            cn1++;
            l++;
        }
        else
        {
            sum2+=a[r];
            cn2++;
            r--;
        }
        if(sum1==sum2)
            //ans=sum1;
            ans=cn1+cn2;
    }
    cout<<ans<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;
    ll a[n+3];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    //sort(a,a+n);
    solve(a,n);
    }
}




