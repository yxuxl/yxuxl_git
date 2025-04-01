#1
import numpy as np
import pandas as pd
#9
import matplotlib.pyplot as plt

import tensorflow as tf
from tensorflow import keras
from tensorflow.keras import layers

# 데이터 불러오기
file_path = 'nbastat2022c.csv'  # Colab 환경에서는 직접 업로드 필요
data = pd.read_csv(file_path)

# 독립 변수 (입력값)와 종속 변수 (출력값) 설정
X = data[['FGA', '3PA', 'FTA']]
y = data['PTS']

# 데이터 정규화
from sklearn.preprocessing import StandardScaler
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

y = np.array(y).reshape(-1, 1)

# 모델 생성
model = keras.Sequential([
    layers.Dense(64, activation='relu', input_shape=(3,)),
    layers.Dense(32, activation='relu'),
    layers.Dense(1)
])

model.compile(optimizer='adam', loss='mse')

# 모델 훈련
history = model.fit(X_scaled, y, epochs=100, verbose=1)

# loss 함수 그래프 출력
plt.plot(history.history['loss'])
plt.xlabel('Epochs')
plt.ylabel('Loss')
plt.title('Loss Function')
plt.show()

# 모델 저장
model.save('hw01_1.h5')
