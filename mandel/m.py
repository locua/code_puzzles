import numpy as np
import matplotlib.pyplot as plt

x,y=np.ogrid[-2:1:5000j,-1.5:1.5:5000j]
c=x + 1j*y
z=0

for g in range(500):
        print('Iteration number: ',g)
        z=z**2 + c

threshold = 2
mask=np.abs(z) < threshold

print('Plotting using imshow()')
plt.imshow(mask.T,extent=[-2,1,-1.5,1.5])
print('plotting done')
plt.gray()
print('Preparing to render')
plt.show()
