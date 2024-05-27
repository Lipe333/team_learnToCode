#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi vector<int>
#define pb push_back
#define mp make_pair

typedef long long ll;
using namespace std;

bool ehPrimo(ll n){
  if(n<=1) return false;
  
  for(ll i=2;i*i<=n;i++){
    if(n%i==0) return false;
  }
  //cout << n << " é primo" << endl;
  return true;
}

void solve(ll n){
  
  set<tuple<ll,ll,ll>> s;
  
  for(int y=1;y<=n;y++){
    int  x=n-y, diff=abs(y-x);
    //cout << diff << " " << x << " " << y << endl;
    if(!ehPrimo(x) && !ehPrimo(y) && x+y==n && x<y){
      s.insert(make_tuple(diff,x,y));
    }
  }
  
  tuple<ll,ll,ll> t = *s.begin();
  
  if(s.size()==0)
    cout << -1 << endl;
  else
    cout << get<1>(t) << " " << get<2>(t) << endl;
}

int main(){ _
  ll t;  cin >> t;
  vector<ll> nums(t);
  for(ll i=0;i<t;i++)
    cin >> nums[i];

  for(auto x:nums){
    solve(x);
  }
  
}
