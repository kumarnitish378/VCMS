import socket as sio
import cv2
import numpy as np
import pickle

vid = cv2.VideoCapture(0)
flg, img = vid.read()
# img = cv2.imread("MODE.png")
print("Sahep: ", img.shape)
data = str(img.flatten().tolist())
print(type(data))
cv2.imshow("Img", img)
cv2.waitKey()
cv2.destroyAllWindows()



# exit()
host = "127.0.0.1"
port = 8585

s = sio.socket()

s.bind((host, port))
print("Bind To port: ", port)

s.listen(5)

def even_odd(num):
    if num%2 == 0:
        return "EVEN"
    else:
        return "ODD"
num = 2
while True:
    try:
        c, add = s.accept()
        print("Got Connection from :", add)
        flg = True
        while flg:
            flg, img = vid.read()
            print(flg)
            if flg:
                flg = False
            else:
                flg = True
        print("Sahep: ", img.shape)
        data = str(img.flatten().tolist())

        for i in range(1):
            # c.send("given Number: {}\n".format(even_odd(int(num))).encode())
            print(len(data))
            c.send("{}\n".format(data).encode())
            num = c.recv(1024).decode()
            print("Receive Number: ", num)

    except KeyboardInterrupt:
        print("Beaking Connection.")
        c.close()
        break