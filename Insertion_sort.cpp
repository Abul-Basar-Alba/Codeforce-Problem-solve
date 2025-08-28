// #include<bits/stdc++.h>
// using namespace std;
// void insertion(int a[],int n)
// {
//   for(int i=1;i<n;i++)
//   {
//     int temp=a[i];
//     int j=i-1;
//     while(j>=0&&a[j]>temp)
//     {
//         a[j+1]=a[j];
//         j--;
//     }
//     a[j+1]=temp;
//   }
//   for(int i=0;i<n;i++)
//   cout<<a[i]<<' ';
//   cout<<endl;
// }
// int main()
// {
//     int a[]={2,8,1,9,4,2};
//     int n=sizeof(a)/sizeof(a[0]);
//     insertion(a,n);
// }

#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1+1],R[n2+1];
    for(int i=0;i<n1;i++)
    {
       L[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
      R[j]=a[mid+j+1];
    }
    L[n1]=1e9+7;
    R[n2]=1e9+7;
    int i=0,j=0;

    for(int k=l;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
    
}
int mergsort(int a[],int l,int r)
{
    if(l<r)
    {
    int mid=(l+r)/2;
    mergsort(a,l,mid);
    mergsort(a,mid+1,r);
    merge(a,l,mid,r);
    }
}
int main()
{
    int a[]={2,4,5,7,1,2,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    mergsort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
}


// #include<bits/stdc++.h>
// using namespace std;

// void merge(int a[], int l, int mid, int r) 
// {
//     int n1 = mid - l + 1;
//     int n2 = r - mid;

//     int L[n1 + 1], R[n2 + 1];

//     for (int i = 0; i < n1; i++) 
//     {
//         L[i] = a[l + i];  
//     }
//     for (int j = 0; j < n2; j++) 
//     {  
//         R[j] = a[mid + 1 + j]; 
//     }

//     L[n1] = 1e9 + 7;  
//     R[n2] = 1e9 + 7;  

//     int i = 0, j = 0;
//     for (int k = l; k <= r; k++) 
//     {  
//         if (L[i] <= R[j]) 
//         {
//             a[k] = L[i];
//             i++;
//         } 
//         else 
//         {
//             a[k] = R[j];
//             j++;
//         }
//     }
// }

// void mergsort(int a[], int l, int r) 
// {
//     if (l < r) 
//     {  
//         int mid = (l + r) / 2;
//         mergsort(a, l, mid);        
//         mergsort(a, mid + 1, r);   
//         merge(a, l, mid, r);        
//     }
// }

// int main() 
// {
//     int a[] = {2, 4, 5, 7, 1, 2, 3, 6};  
//     int n = sizeof(a) / sizeof(a[0]);
    
//     mergsort(a, 0, n - 1);  

//     for (int i = 0; i < n; i++) 
//     {
//         cout << a[i] << ' ';
//     }
//     cout << endl;

//     return 0;
// }
