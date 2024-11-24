import time
a = 1.0


for i in range(1, 365):
    a *= 1.01

def B(pb):
    b = 1.0
    for i in range(1,365):
        if i%7 in [0,1]:
            b *= 0.99
        else:
            b *= (1.0 + pb)
    return b

cnt = 0.001
while B(cnt) < a:
    cnt += 0.001



print(time.ctime())