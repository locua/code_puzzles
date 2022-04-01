#include <stdio.h>
#include <stdint.h>

uint64_t ncr(uint64_t N, uint64_t R){
  uint64_t a,b,n,r,h,d,t;
  short even = 0;
  a=1;
  if(R==0 || N==R)
    return a;
  if(R==1 || R==(N-1))
    return N;
  n=N;
  if(N%2==0){
    even=1;
    h=N/2;
    if(R>h)
      r=R=N-R;
  }else{
    h=(N+1)/2;
    if(R>=h)
      R=N-R;
  }
  r=R;
  while(n>N-R || r>1){
    t=n;
    if(n<=N-R)
      t=1;
    else{
      while(t%r!=0){
        n--;
        t*=n;
      }
    }
    a*=(t/r);
    n--;
    r--;
  }
  return a;
}


uint64_t gcd(uint64_t a,uint64_t b){
    while(b){
        uint64_t t=b;
        b=a%b;
        a=t;
    }
    return a;
}


uint64_t nCr(uint64_t n, uint64_t r){
  uint64_t p, k;
  p=k=1;
  if (n-r<r) 
    r=n-r;
  if(r!=0){
    while(r){
      p*=n;
      k*=r;
      uint64_t m=gcd(p,k);
      p/=m;
      k/=m;
      n--;
      r--;
    }
  } else
    return 1;
  return p;
}

int main(){
  uint64_t N=20;
  for(uint64_t n=0;n<=N;n++){
    for(uint64_t r=0;r<=n;r++)
      printf("%ld ",nCr(n,r));
    printf("\n");
  }
  return 0;
}
