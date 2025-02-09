import numpy as np
import matplotlib.pyplot as plt
x = (np.arange(0,360,1)*np.pi)/180
y = np.sin(x)
print(y)
plt.grid()
plt.plot(x,y)
plt.show()