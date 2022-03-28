# Print the max number of prime factors for q integers.
# The first line is q.
""" input:
6
1
2
3
500
5000
10000000000
"""
def gcd(a, b):
  while(b):
    t=b
    b=a%b
    a=t    
  return a

def max_unique_primes(n):
  if(n<2):
    return 0
  prod=2
  c=1
  prim=3
  while(prod*prim <=n):
    print(prim)
    prim+=2
    if gcd(prod,prim)==1:
      prod*=prim
      c+=1
  return c

import sys
q=input()
inputs=[]
for i in range(int(q)):
  n=input()
  inputs.append(int(n)) 

for i in inputs:
  print(max_unique_primes(i))


#print(max_unique_primes(100000000))

