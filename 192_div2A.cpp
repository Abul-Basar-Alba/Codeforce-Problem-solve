#include<bits/stdc++.h>
using namespace std;
bool pre(char ar[][c],char v,int row)
{
   for (int j = 0; j < c; ++j) {
        if (ar[row][j] == v) {
            return true; 
        }
    }
    return false; 
}
bool pre(char ar[][r],char v,int col)
{
  for (int i = 0; i <r; ++i) {
        if (ar[i][col] == v) {
            return true; 
        }
    }
    return false; 
}
int main()
{
    int r,c;
    cin>>r>>c;
    char ar[r][c];
    char v= 'S';
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>ar[r][c];
        }
    }
 
}

