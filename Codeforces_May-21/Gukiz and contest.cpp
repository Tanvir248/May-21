#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define pb  push_back
#define eb emplace_back
#define B begin()
#define E end()
#define sz size()
#define r(x) reverse(x.begin(), x.end())
#define s(x) sort(x.begin(), x.end())
#define vi vector<int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
          ll n, num;
          cin>>n;
          vi add;
          for (int i = 0; i < n; i++)
          {
              cin>>num;
              add.pb(num);
          }
          for (int i = 0; i < n; i++)
          {
              ll cnt =1;
              for (int j = 0; j < n; j++)
              {
                  if(add[i]<add[j])
                  cnt++;
              }
              cout<<cnt<<" ";
          }
     cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}