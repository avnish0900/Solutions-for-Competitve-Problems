#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;int count=1;
  cin>>s;
  sort(s.begin(),s.end());
  for(int i=0;i<s.length();i++){
    if(s[i]!=s[i+1]){
      count++;
    }
  }
  if(count%2 == 1){
    cout<<"CHAT WITH HER!";
  }
  else{
    cout<<"IGNORE HIM!";
  } 
  return 0;
}
