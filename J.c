#include <stdio.h>
void permutation(int at, int n)
{
if(at == n + 1)
{
 for(int i = 1; i <= n; i++)
 printf("%d ", number[i]);
printf("\n");
return;
}
for(int i = 1; i <= n; i++)
 if(!used[i])
 {
used[i] = 1;
number[at] = i;
permutation(at + 1, n);
used[i] = 0;
 }
}
int main() {
    int used[20],number[20];
    int n;
    scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
         scanf("%d",&used[i]);
         //scanf("%d",&number[i]);
     }
 //call with: permutation(1, n)
//make sure, all the entries in used[] is 0

}
