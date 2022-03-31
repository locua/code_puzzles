#include <stdio.h>
#define ll unsigned long long int

ll fact(ll n){ /* Factorial function */
  ll o=1;
  for(ll i=1;i<n;i++){
    o*=(i+1);
  }
  return o;
}

void pline(ll n){
  for(ll r=0;r<=n;r++){
    printf("%lld ",fact(n)/(fact(r)*(fact(n-r))));
  }
  printf("\n");
}

int main(){
  //pline(24);
  for(int i=0;i<30;i++)
    printf("%lld ", fact(i));
  printf("\n");
  return 0;
}
