import matplotlib.pyplot as plt
import complex

xi=0
c = -0.65 #(Tends to a fixed point)
c = -1.6 #(Chaotic behaviour)
c = -1.75 #(Tends to period 3)
c = -1.8 #(Chaotic behaviour close to 3-cycle, sometimes called intermittency)
#c = -1.85 #(Chaotic behaviour)
#c = 0.2 #(Tends to a fixed point).
c=3j # c is imaginary, j is i in python
Y=[]
itr=[]

#def manny(x,y):
#  c1=complex(x,y)
#  c2=0
#  for n in range(1,900):
#    if abs(c2)>2:
#


def poly(z,_c):
  return z**2 + _c

import random

for i in range(0,100):
  xi=poly(xi,c)
  print(xi)
  itr.append(i)
  Y.append(xi)

plt.plot(itr,Y,'.')
plt.show()


