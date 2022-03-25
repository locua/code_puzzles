#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <bits/stdc++.h>


#define ll unsigned long long

using namespace std;

bool isPrime(int n){
    // Corner case
    if (n <= 1)
        return false;
    // Check from 2 to n-1
    for (int i = 2; i*i <= n; ++i)
        if (n % i == 0)
            return false;
  
    return true;
}

int primeCount(long n) {
    int max = 0;
    for(long i=1; i <= n; i++){      //find factors
        cout << i << endl;
        int c=0;
        if(i%2==0){
          c++;
        }
        for(long j=3;j<sqrt(i);j+=2){
          if(i%j==0) {      // is a prime factor
            if(isPrime(j)){
              c++;
            }
          }       
        }
        if(c>max)
          max=c;
    }
    return max;
}

int main()
{

  //cout << 13%7<<"\n";

  int num;
  cin>>num;
  long ans[num];
  for(int i=0;i<num;i++){
    long x;
    cin >> x;
    ans[i]=primeCount(x);
  }
  for(int i=0;i<num;i++)
    cout<< ans[i] <<"\n";
}
















/*
  for(int i=0;i<100;i++)
    if(isPrime(i))
      cout << i <<endl;// print some primes
  long my_num;
  cin >> my_num;
  cout <<my_num<<"\n";
  return 0; */
