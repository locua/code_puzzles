
# Print the max number of prime factors for q integers.
# The first line is q.
""" Example input:
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

#gcd(8,50)
#import sys;sys.exit(0)

def max_unique_primes(n):
  if(n<2):
    return 0
  prod=2
  c=1
  prim=3
  while(prod*prim <=n):
    if gcd(prod,prim)==1:
      prod*=prim
      c+=1
    prim+=2
  return c

q=input()
inputs=[]
for i in range(int(q)):
  n=input()
  inputs.append(int(n)) 

for i in inputs:
  print(max_unique_primes(i))

