import socket as sio
from random import randint
import numpy as np
import cv2
import matplotlib.pyplot as plt

ser = sio.socket()
port = 8585

def convert_to_img(lst):
    dt = lst.replace("[", "").replace("]", "")
    print(dt)
    img_lst = np.array([int(i) for i in dt.split(", ")])
    img = np.reshape(img_lst, (150, 150, 3))
    print(img)
    plt.imshow(img)
    plt.show()

ser.connect(("127.0.0.1", port))
while True:
    try:
        data = ser.recv(3561756).decode()
        print(len(data))
        convert_to_img(data)
        img = ""
        ser.send("{}".format(randint(1, 1000)).encode())
        if "9999" in data:
            break
        break
    except KeyboardInterrupt:
        print("Key Borewoṭṅ oglk;fhp ")
        break
ser.close()