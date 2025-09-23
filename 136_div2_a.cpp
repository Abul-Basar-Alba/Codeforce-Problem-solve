/*#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<1<<endl;
    else{
        vector<int>v(n);
        for(int i=1;i<n;i++)
          {
              v[i]=i;
            //v.push_back(i+1);
          }
          v[0]=n;
          v[n-1]=n-1;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }

}*/
#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int n;
    cin >> n;

    vector<int> permutation(n);

    for (int i = 0; i < n; i++)
    {
        permutation[i] = i + 1;
    }

    // Perform the Little Elephant's function (f(n))
    for (int x = n; x >= 2; x--)
    {
        swap(permutation[x - 1], permutation[x - 2]);
    }

    // Print the sorted permutation
    for (int i = 0; i < n; i++)
    {
        cout << permutation[i] << " ";
    }

    cout << endl;

    return 0;
}

