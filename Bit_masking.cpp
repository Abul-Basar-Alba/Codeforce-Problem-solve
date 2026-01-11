// luv episod 48

// #include<bits/stdc++.h>
// using namespace std;
// void binary(int num)
// {
//     for(int i=10;i>=0;i--)
//     cout<<((num>>i)&1);
//     cout<<endl;
// }
// int main()
// {
// int n;
// cin>>n;
// binary(n);
// int i=3;
// //check set
// if((1<<i)&n)
// cout<<"set"<<endl;
// else
// cout<<"not set"<<endl;

// // bit  set
// binary(n|(1<<1));

// //bit unset
// binary(~n);//it's called tilda.it using 1 convert 0 and 0 convert 1;

// binary(n&~(1<<i));

// //toggle 
// binary(n^(1<<2));

// //bit count 
// int cn=0;
// for(int i=31;i>=0;i--)
// {
//  if((1<<i)&n)
//  cn++;
// }
// cout<<cn<<endl;
// // using buildting function bit count 
// cout<<__builtin_popcount(n)<<endl;// only intger type 
// cout<<__builtin_popcountll((1LL<<35)-1);
// }

// luv episod 49

// #include<bits/stdc++.h>
// using namespace std;
// void binary(int num)
// {
//     for(int i=10;i>=0;i--)
//     cout<<((num>>i)&1);
//     cout<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     //tricks-1: even odd check
//     if(n&1)
//     cout<<"odd"<<endl;
//     else
//     cout<<"Even"<<endl;

//     //tricks-2: multiprication and division 
//     cout<<(n>>1)<<endl;//left sift or division
//     cout<<(n<<1)<<endl;//right sift or multiplication 
//     //trincks-3: upper to lower 
//     char B='B';
//     //char b=B|' ';
//     cout<<char(B|' ')<<endl;// | or simbole 
//     //lower to upper 
//     char d='d';
//     //char D=d&'_';
//     cout<<char(d&'_')<<endl;// & and simbole , ^ xor simbole 
//     // tricks-4:
//     binary(n);
//     int i=4;  // 4th bit LSB clear 
//     int b=(n&(~((1<<i+1)-1)));
//     binary(b);
//     //tricks -5:
//     i=3;  // 3td bit MSB clear 
//     int c=(n&((1<<i+1)-1));
//     binary(c);
//     //tricks-6:
//     if(n&(n-1))//check power of two 
//     {
//        cout<<"No"<<endl; 
//     }
//     else
//     cout<<"squer"<<endl;
    
// }


// //luv episod 50

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int x;
//     int res=0;
//     for(int i=0;i<n;i++)
//     {
//         cin>>x;
//         res^=x;
//     }
//     cout<<res<<endl;
// }