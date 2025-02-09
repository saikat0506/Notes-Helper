import matplotlib.pyplot as plt
n = int(input("Enter the number of points: "))
x = []
y = []
for i in range(0, n):
    xco = int(input("Enter xco: "))
    yco = int(input("Enter yco: "))
    x.append(xco)
    y.append(yco)
print(x)
print(y)
plt.plot(x,y,'go--')