// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;

//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         sort(a.begin(),a.end());
//         ll res=0;
//         ll f=0;
//         for(int i=0;i<n;i++)
//         {
//           if(a[i]!=f)
//           {
//             f++;
//             if(a[i]!=f)
//             {
//                 res+=a[i]-f;
//             }
//           }
//         }
//         cout<<res<<endl;
//     }
// }

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;

//     while (t--)
//     {
//         ll a,b;
//         cin>>a>>b;
//         if(a==0||b==0)
//         {
//         if((a==0&&b%2==0)||(b==0&&a%2==0))
//         {
//             cout<<"YES\n";
//             //continue;
//         }
//         else
//         cout<<"NO\n";
//         }
//         else
//         {
//           ll x=b*2;
//           ll res=abs(x-a);
//         if(res%2==0)
//         cout<<"YES\n"; 
//         else
//         cout<<"NO\n";
//         }
//     }
// }

//c
// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;

//     while (t--)
//     {
//         ll l, r;
//         cin >> l >> r;

//         ll mxdiff = r - l;
//         ll k = (-1 + sqrt(1 + 8 * mxdiff)) / 2;

//         cout << k + 1 << endl;
//     }

//     return 0;
// }


//B
// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//      ll t;
//      cin>>t;

//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         string s;
//         cin >> s;

//         ll r = sqrt(n);
//         if (r * r != n) 
//         {
//             cout << "No" << endl;
//             continue;
//         }

//         bool ok = true;

//         for (int i = 0; i < r; ++i) 
//         {
//             if (s[i] != '1' || s[n - 1 - i] != '1') 
//             {
//                 ok = false;
//                 break;
//             }
//         }

//         for (int i = 1; i < r - 1 && ok; ++i) 
//         {
//             if (s[i * r] != '1' || s[(i + 1) * r - 1] != '1') 
//             {
//                 ok = false;
//                 break;
//             }
           
//             for (int j = 1; j < r - 1; ++j) 
//             {
//                 if (s[i * r + j] != '0') 
//                 {
//                     ok = false;
//                     break;
//                 }
//             }
//         }

//         if (ok)
//             cout << "Yes" << endl;
//         else
//             cout << "No" << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
 
// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     ll t;
//     cin >> t;
 
//     while (t--)
//     {
//         ll l,r;
//         cin>>l>>r;
//         vector<ll>v;
//         ll f=0;
//         while(l<=r/2)
//         {
//           v.push_back(l);
//           f++;
//           l+=f;
//         }
//         while(l<=r)
//         {
//           v.push_back(l);
//           f++;
//           l+=f;
//         }
//         cout<<v.size()<<endl;
//     }
// }


// #include <bits/stdc++.h>
// #define yasin {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
// using namespace std;


// void postfixToInfix(queue<string> input){
//     stack<string> st;
    
//     while(!input.empty()){
//     string token = input.front();
//     input.pop();
//         if(token=="+" || token=="-" || token=="*" || token=="/"){
//             string operator2  = st.top();
//             st.pop();
//             string operator1 = st.top();
//             st.pop();
//             string exp = "(" + operator1 + token + operator2 + ")";
//             st.push(exp);
//         }else{
//             st.push(token);
//         }
//     }
//     cout<<st.top()<<endl;
// }


// int precidence(string op){
//         if(op=="+" || op=="-"){
//             return 1;
//         }else if(op=="*" || op=="/"){
//             return 2;
//         }else if(op=="^"){
//             return 3;
//         }
//     return 0;
// }

// void infixToPostFix(queue<string> input){
//     string ans="";
//     stack<string> st;
//     st.push("(");
//     input.push(")");
//     while(!input.empty()){
//         string token = input.front();
//         input.pop();
//         if(token=="+" || token=="-" || token=="*" || token=="/" || token=="^" ){
//             while(!st.empty() && precidence(st.top())>= precidence(token)){
//                 ans += st.top() + " ";
//                 st.pop();
//             }
//             st.push(token);
//         }else if(token==")"){
//             while(!st.empty()){
//                 if (st.top()=="(") break;
//                 ans += st.top()+" ";
//                 st.pop();
//             }
//         }else if(token=="("){
//             st.push(token);
//         }else{
//             ans += token + " ";
//         }
//     }
//     cout<<ans<<endl;
// }

// int main() {

//     // Infix To PostFix 
//     queue<string> inputPostFix({"A","+","(","B","*","C","-","(","D","/","E","^","F",")","*","G",")","*","H"});
//     infixToPostFix(inputPostFix);

//     // PostFix To Infix 
//     queue<string> input_list({"5","6","2","+","*","12","4","/","-"});
//     postfixToInfix(input_list);



//     return 0;
// }


