import pandas as pd
dataset=pd.read_csv("D:/vs codes/SNU Coding/Machine Learning/Day 2/dataset2.csv")
print(dataset)
print("dataset.head():-")
print(dataset.head())
print("dataset.describe():-")
print(dataset.describe())
dataset.plot(x='Miles_Driven',y='Price')
dataset.plot(x='Miles_Driven',y='Price',style="o")
dataset.plot(x='Miles_Driven',y='Price',style="o--")
x=dataset.iloc[:,:-1].values
print(x)
y=dataset.iloc[:,1].values
print(y)

from sklearn.model_selection import train_test_split
x_training,x_testing,y_training,y_testing=train_test_split(x,y,test_size=0.2,random_state=0)
print(x_training)
print(x_testing)
print(y_training)
print(y_testing)