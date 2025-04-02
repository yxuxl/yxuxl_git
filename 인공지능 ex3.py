import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

file_path = 'nbastat2022c.csv'
data = pd.read_csv(file_path)

data = data.dropna()

m = data.shape[0]
X = np.array(data[['FGA', '3PA', 'FTA']]).reshape(m, -1)
Y = np.array(data['PTS']).reshape(m, 1)

print("data:")
print(data.head())

learning_rate = 0.1
n_iter = 500

from sklearn.preprocessing import StandardScaler
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

def compute_loss(X, Y, weights):
    m = len(Y)
    predictions = X @ weights
    loss = (1 / (2 * m)) * np.sum((predictions - Y) ** 2)
    return loss

def gradient_descent(X, Y, learning_rate, n_iter):
    m, n = X.shape
    X_bias = np.c_[np.ones((m, 1)), X]
    weights = np.random.randn(n + 1, 1)
    losses = []

    for epoch in range(n_iter):
        gradients = (1 / m) * X_bias.T @ (X_bias @ weights - Y)
        weights -= learning_rate * gradients
        loss = compute_loss(X_bias, Y, weights)
        losses.append(loss)

    return weights, losses

weights, losses = gradient_descent(X_scaled, Y, learning_rate, n_iter)

plt.plot(range(1, n_iter + 1), losses)
plt.xlabel('Iterations')
plt.ylabel('Loss')
plt.title('Loss Function')
plt.show()

np.save('hw01_1_weights.npy', weights)
