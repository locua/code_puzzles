xi=0
c=-1.9

def poly(z,_c):
  return z**2 + _c

for i in range(0,10):
  xi=poly(xi,c)
  print(xi)


