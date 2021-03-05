#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define fi first
#define se second


void solve(string s){
  string compressionStr = "";
  int cnt = 1;
  compressionStr += s[0];
  for(int i = 1; i < s.size(); i++){
    if(s[i] == s[i - 1]){
      cnt++;
    }else{
      compressionStr += to_string(cnt);
      compressionStr += s[i];
      cnt = 1;
    }
  }
  compressionStr += to_string(cnt);
  cout<<compressionStr<<'\n';
}


int main() {
//  freopen("in.txt","r", stdin);
//  freopen("out.txt","w", stdout);

  string str;
  while(cin>>str)

  solve(str);

  return 0;
}

/**
aabccaaa

*/


