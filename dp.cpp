#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <bits/stdc++.h>

#define ll unsigned long long

using namespace std;

unsigned long long int gcd(unsigned long long int a, unsigned long long int b)
{

  while (b) {
    unsigned long long int t = b;

    b = a % b;
    a = t;
  }
  return a;
}

unsigned int max_unique_primes(unsigned long long int n)
{
  unsigned int count;
  unsigned long long int prod;
  unsigned long long int prim;

  if (n < 2)
    return 0;

  prod = 2;
  count = 1;
  for (prim = 3; prod * prim <= n; prim += 2) {
    if (gcd(prod, prim) == 1) {
      prod *= prim;
      count++;
    }
  }
  return count;
}


int main()
{
  int q;
  cin>>q;
  unsigned long long int ans[q];
  for(int i=0;i<q;i++){
    long x;
    cin >> x;
    ans[i]=max_unique_primes(x);
    //ans[i]=primeCount(x); // slow version
  }
  for(int i=0;i<q;i++)
    cout<< ans[i] <<"\n";
}

/* my slow code

//bool isPrime(int n){ // slower prime checker
//    // Corner case
//    if (n <= 1)
//        return false;
//    // Check from 2 to n-1
//    for (int i = 2; i*i <= n; ++i)
//        if (n % i == 0)
//            return false;
//  
//    return true;
//}

bool isPrime(unsigned long long n)
{
    if (n <= 3)
        return n > 1;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}



int primeCount(long n) {
    int max = 0;
    cout <<"Checking: "<< n<<"\n";
    for(long i=1; i <= n; i++){      //find factors
        //cout << i << endl;
        int c=0;
        if(i%2==0){
          c++;
        }
        for(long j=3;j*j<n;j+=2){
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

int num_prime_factors(long n){
  int c = 0;
  //vector<long> factors;
  if(n%2==0){
    c++;
    //factors.push_back(2);
  }
  for(long j=3;j<sqrt(n);j+=2){
    if(n%j==0) {      // is a prime factor
      if(isPrime(j)){
        c++;
        //factors.push_back(j);
      }
    }       
  }
  //for (int i = 0; i < factors.size(); i++)
  //  cout << factors[i] << " ";
  //cout <<"\n";
  return c;
}



*/

  //cout <<primeCount(10000000000) << "\n";
  //cout <<primeCount(500) << "\n";
  //return 0;
  //cout << 13%7<<"\n";


/*
  for(int i=0;i<100;i++)
    if(isPrime(i))
      cout << i <<endl;// print some primes
  long my_num;
  cin >> my_num;
  cout <<my_num<<"\n";
  return 0; */
