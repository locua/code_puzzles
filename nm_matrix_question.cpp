#include <iostream>
#include <math.h>
#include <string>

#define ll unsigned long long

using namespace std;

ll gameWithCells(ll n, ll m) {
    if (m==1 && n==1)
        return 1;
    else if(m==1 || n==1){
        if(m>n)
            return ceil(m/2.0);
        else
            return ceil(n/2.0);
    }
    else
        return ceil(m/2.0)*ceil(n/2.0);
}

int main(){
  string m, n, s;
  cin >> n >> m;
  //cin >> s; //new lines
  cout << s << "\n";
  cout << "ANSWER: " <<gameWithCells(stoi(n),stoi(m)) << "\n";
}
