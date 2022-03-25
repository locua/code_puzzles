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
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int primeCount(long n) {
    int count=0;
    if(n%2==0){
      count++;
    }
    for(long i=3; i < n/2; i+=2){      //find factors
        //cout << "For "<<n<<": is " <<i <<" a prime factor?"<< endl;
        if(n%i==0 && isPrime(i)) {      // is a prime factor
          cout<<"prime "<<i<<endl;
          count++;
        }
    }
    return count;
}

int main()
{
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

/*
  for(int i=0;i<100;i++)
    if(isPrime(i))
      cout << i <<endl;// print some primes
  long my_num;
  cin >> my_num;
  cout <<my_num<<"\n";
  return 0; */
}
