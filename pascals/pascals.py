def fact(x):
  o=1
  for i in range(1,x):
    o*=(i+1)
  return o

def pline(n):
  for r in range(0, n+1):
    x = fact(n)/(fact(r)*fact(n-r))
    print(int(x), end=' ')
  print("\n")

pline(80)
