import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# ⑥ pandas에서 필요한 열 선택
file_path = 'nbastat2022c.csv'
data = pd.read_csv(file_path)

# ⑦ 결측치 제거
data = data.dropna()

# ⑧ ndarray로 변환
X = data[['FGA', '3PA', 'FTA']].values
Y = data['PTS'].values.reshape(-1, 1)

# ⑨ data 확인
print("데이터 샘플:")
print(data.head())

# ⑩ hyperparameter 설정
learning_rate = 0.01
epochs = 100

# ⑪ 데이터 정규화
from sklearn.preprocessing import StandardScaler
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

# ⑫ 초기화 및 변수 설정
def compute_loss(X, Y, weights):
    m = len(Y)
    predictions = X @ weights
    loss = (1 / (2 * m)) * np.sum((predictions - Y) ** 2)
    return loss

def gradient_descent(X, Y, learning_rate, epochs):
    m, n = X.shape
    X_bias = np.c_[np.ones((m, 1)), X]  # Bias 추가
    weights = np.random.randn(n + 1, 1)  # 가중치 초기화
    loss_history = []
    
    # ⑬ 경사 하강법 수행
    for epoch in range(epochs):
        gradients = (1 / m) * X_bias.T @ (X_bias @ weights - Y)
        weights -= learning_rate * gradients
        loss = compute_loss(X_bias, Y, weights)
        loss_history.append(loss)
    
    return weights, loss_history

# 경사 하강법 실행
weights, loss_history = gradient_descent(X_scaled, Y, learning_rate, epochs)

# loss 함수 그래프 출력
plt.plot(range(1, epochs + 1), loss_history)
plt.xlabel('Epochs')
plt.ylabel('Loss')
plt.title('Loss Function')
plt.show()

# 모델 저장
np.save('hw01_1_weights.npy', weights)
