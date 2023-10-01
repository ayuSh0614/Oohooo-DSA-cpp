import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.datasets import load_iris
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split


iris_df = load_iris()
# print(iris_df.head())
data = load_iris() 
# print(data.feature_names)
# print(data.target_names)
# print(data.target)
X = data.data
# print(X.shape )
y = data.target
# print(y.shape)
y = y.reshape(-1, 1)
# print(y.shape)
print(plt.figure(figsize=(18,8),dpi=100)  ) 

model = LinearRegression()
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2)
model.fit(X_train, y_train)
ypred = model.predict(X_test)
# print("Age: ", X_test.values[0])
print("Accuracy: ", model.score(X_test, y_test))

plt.scatter(X.T[0],X.T[2])  
plt.title('IRIS Petal and sepal length', fontsize=20) 


plt.ylabel('Petal Length') 
plt.xlabel('sepal length')
plt.show()