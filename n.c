#include <stdio.h>

#define ll unsigned long long int

ll gcd(ll a,ll b){
    while(b){
        ll t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int main(){
    ll a,b;
    scanf("%lld", &a);
    scanf("%lld", &b);
    printf("%lld",gcd(a,b));
    printf("\n");
}