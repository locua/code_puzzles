#include <string>
#include <iostream>
using namespace std;

std::string grid(int n) {
  string out="";
  string alph="abcdefhijklmnopqrstuvwxyz";
  if(n==1)
    return "a";
  for(int i;i<n;i++){
    for(int j=0;j<n;j++){
      int ix=i%26;
      out+=alph[(ix+j)%26];
      out+=" ";
    }
    out+="\n";
   }
  return out;
}

int main(){
  for(int i=1;i<27;i++)
    cout << grid(i) <<endl;
  return 0;
}
