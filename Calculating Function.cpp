#include<iostream>
using namespace std;
int main(){
  long long a;cin>>a;
  cout<<a/2-(a&1 ?a:0)<<endl;
  }
