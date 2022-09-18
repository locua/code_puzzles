import random
import matplotlib.pyplot as plt
import numpy as np

mu, sigma = 100, 15

results=[]
for i in range(1000):
  hc=0
  for j in range(10000):
    n=random.random()
    if n < 0.5:
      hc+=1
  results.append(hc)

print(results)

n,bins,patches=plt.hist(results) 
plt.show()
