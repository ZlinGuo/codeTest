# # 画哆啦A梦
# from turtle import *
#
#
# # 无轨迹跳跃
# def my_goto(x, y):
#     penup()
#     goto(x, y)
#     pendown()
#
#
# # 画眼睛
# def eyes():
#     fillcolor("#ffffff")
#     begin_fill()
#
#     tracer(False)
#     a = 2.5
#     for i in range(120):
#         if 0 <= i < 30 or 60 <= i < 90:
#             a -= 0.05
#             lt(3)
#             fd(a)
#         else:
#             a += 0.05
#             lt(3)
#             fd(a)
#     tracer(True)
#     end_fill()
#
#
# # 画胡须
# def beard():
#     my_goto(-32, 135)
#     seth(165)
#     fd(60)
#
#     my_goto(-32, 125)
#     seth(180)
#     fd(60)
#
#     my_goto(-32, 115)
#     seth(193)
#     fd(60)
#
#     my_goto(37, 135)
#     seth(15)
#     fd(60)
#
#     my_goto(37, 125)
#     seth(0)
#     fd(60)
#
#     my_goto(37, 115)
#     seth(-13)
#     fd(60)
#
#
# # 画嘴巴
# def mouth():
#     my_goto(5, 148)
#     seth(270)
#     fd(100)
#     seth(0)
#     circle(120, 50)
#     seth(230)
#     circle(-120, 100)
#
#
# # 画围巾
# def scarf():
#     fillcolor('#e70010')
#     begin_fill()
#     seth(0)
#     fd(200)
#     circle(-5, 90)
#     fd(10)
#     circle(-5, 90)
#     fd(207)
#     circle(-5, 90)
#     fd(10)
#     circle(-5, 90)
#     end_fill()
#
#
# # 画鼻子
# def nose():
#     my_goto(-10, 158)
#     seth(315)
#     fillcolor('#e70010')
#     begin_fill()
#     circle(20)
#     end_fill()
#
#
# # 画黑眼睛
# def black_eyes():
#     seth(0)
#     my_goto(-20, 195)
#     fillcolor('#000000')
#     begin_fill()
#     circle(13)
#     end_fill()
#
#     pensize(6)
#     my_goto(20, 205)
#     seth(75)
#     circle(-10, 150)
#     pensize(3)
#
#     my_goto(-17, 200)
#     seth(0)
#     fillcolor('#ffffff')
#     begin_fill()
#     circle(5)
#     end_fill()
#     my_goto(0, 0)
#
#
# # 画脸
# def face():
#     fd(183)
#     lt(45)
#     fillcolor('#ffffff')
#     begin_fill()
#     circle(120, 100)
#     seth(180)
#     # print(pos())
#     fd(121)
#     pendown()
#     seth(215)
#     circle(120, 100)
#     end_fill()
#     my_goto(63.56, 218.24)
#     seth(90)
#     eyes()
#     seth(180)
#     penup()
#     fd(60)
#     pendown()
#     seth(90)
#     eyes()
#     penup()
#     seth(180)
#     fd(64)
#
#
# # 画头型
# def head():
#     penup()
#     circle(150, 40)
#     pendown()
#     fillcolor('#00a0de')
#     begin_fill()
#     circle(150, 280)
#     end_fill()
#
#
# # 画哆啦A梦
# def Doraemon():
#     # 头部
#     head()
#
#     # 围脖
#     scarf()
#
#     # 脸
#     face()
#
#     # 红鼻子
#     nose()
#
#     # 嘴巴
#     mouth()
#
#     # 胡须
#     beard()
#
#     # 身体
#     my_goto(0, 0)
#     seth(0)
#     penup()
#     circle(150, 50)
#     pendown()
#     seth(30)
#     fd(40)
#     seth(70)
#     circle(-30, 270)
#
#     fillcolor('#00a0de')
#     begin_fill()
#
#     seth(230)
#     fd(80)
#     seth(90)
#     circle(1000, 1)
#     seth(-89)
#     circle(-1000, 10)
#
#     # print(pos())
#
#     seth(180)
#     fd(70)
#     seth(90)
#     circle(30, 180)
#     seth(180)
#     fd(70)
#
#     # print(pos())
#     seth(100)
#     circle(-1000, 9)
#
#     seth(-86)
#     circle(1000, 2)
#     seth(230)
#     fd(40)
#
#     # print(pos())
#
#     circle(-30, 230)
#     seth(45)
#     fd(81)
#     seth(0)
#     fd(203)
#     circle(5, 90)
#     fd(10)
#     circle(5, 90)
#     fd(7)
#     seth(40)
#     circle(150, 10)
#     seth(30)
#     fd(40)
#     end_fill()
#
#     # 左手
#     seth(70)
#     fillcolor('#ffffff')
#     begin_fill()
#     circle(-30)
#     end_fill()
#
#     # 脚
#     my_goto(103.74, -182.59)
#     seth(0)
#     fillcolor('#ffffff')
#     begin_fill()
#     fd(15)
#     circle(-15, 180)
#     fd(90)
#     circle(-15, 180)
#     fd(10)
#     end_fill()
#
#     my_goto(-96.26, -182.59)
#     seth(180)
#     fillcolor('#ffffff')
#     begin_fill()
#     fd(15)
#     circle(15, 180)
#     fd(90)
#     circle(15, 180)
#     fd(10)
#     end_fill()
#
#     # 右手
#     my_goto(-133.97, -91.81)
#     seth(50)
#     fillcolor('#ffffff')
#     begin_fill()
#     circle(30)
#     end_fill()
#
#     # 口袋
#     my_goto(-103.42, 15.09)
#     seth(0)
#     fd(38)
#     seth(230)
#     begin_fill()
#     circle(90, 260)
#     end_fill()
#
#     my_goto(5, -40)
#     seth(0)
#     fd(70)
#     seth(-90)
#     circle(-70, 180)
#     seth(0)
#     fd(70)
#
#     # 铃铛
#     my_goto(-103.42, 15.09)
#     fd(90)
#     seth(70)
#     fillcolor('#ffd200')
#     # print(pos())
#     begin_fill()
#     circle(-20)
#     end_fill()
#     seth(170)
#     fillcolor('#ffd200')
#     begin_fill()
#     circle(-2, 180)
#     seth(10)
#     circle(-100, 22)
#     circle(-2, 180)
#     seth(180 - 10)
#     circle(100, 22)
#     end_fill()
#     goto(-13.42, 15.09)
#     seth(250)
#     circle(20, 110)
#     seth(90)
#     fd(15)
#     dot(10)
#     my_goto(0, -150)
#
#     # 画眼睛
#     black_eyes()
#
#
# if __name__ == '__main__':
#     screensize(800, 600, "#f0f0f0")
#     pensize(5)  # 画笔宽度
#     speed(9)  # 画笔速度
#     Doraemon()
#     my_goto(100, -300)
#     write('by dongdong', font=("Bradley Hand ITC", 30, "bold"))
#     mainloop()
#
# from turtle import *
#
#
# # 无轨迹跳跃
# def my_goto(x, y):
#     penup()
#     goto(x, y)
#     pendown()
#
#
# # 眼睛
# def eyes():
#     fillcolor("#ffffff")
#     begin_fill()
#
#     tracer(False)
#     a = 2.5
#     for i in range(120):
#         if 0 <= i < 30 or 60 <= i < 90:
#             a -= 0.05
#             lt(3)
#             fd(a)
#         else:
#             a += 0.05
#             lt(3)
#             fd(a)
#     tracer(True)
#     end_fill()
#
#
# # 胡须
# def beard():
#     my_goto(-32, 135)
#     seth(165)
#     fd(60)
#
#     my_goto(-32, 125)
#     seth(180)
#     fd(60)
#
#     my_goto(-32, 115)
#     seth(193)
#     fd(60)
#
#     my_goto(37, 135)
#     seth(15)
#     fd(60)
#
#     my_goto(37, 125)
#     seth(0)
#     fd(60)
#
#     my_goto(37, 115)
#     seth(-13)
#     fd(60)
#
#
# # 嘴巴
# def mouth():
#     my_goto(5, 148)
#     seth(270)
#     fd(100)
#     seth(0)
#     circle(120, 50)
#     seth(230)
#     circle(-120, 100)
#
#
# # 围巾
# def scarf():
#     fillcolor('#e70010')
#     begin_fill()
#     seth(0)
#     fd(200)
#     circle(-5, 90)
#     fd(10)
#     circle(-5, 90)
#     fd(207)
#     circle(-5, 90)
#     fd(10)
#     circle(-5, 90)
#     end_fill()
#
#
# # 鼻子
# def nose():
#     my_goto(-10, 158)
#     seth(315)
#     fillcolor('#e70010')
#     begin_fill()
#     circle(20)
#     end_fill()
#
#
# # 黑眼睛
# def black_eyes():
#     seth(0)
#     my_goto(-20, 195)
#     fillcolor('#000000')
#     begin_fill()
#     circle(13)
#     end_fill()
#
#     pensize(6)
#     my_goto(20, 205)
#     seth(75)
#     circle(-10, 150)
#     pensize(3)
#
#     my_goto(-17, 200)
#     seth(0)
#     fillcolor('#ffffff')
#     begin_fill()
#     circle(5)
#     end_fill()
#     my_goto(0, 0)
#
#
# # 脸
# def face():
#     fd(183)
#     lt(45)
#     fillcolor('#ffffff')
#     begin_fill()
#     circle(120, 100)
#     seth(180)
#     # print(pos())
#     fd(121)
#     pendown()
#     seth(215)
#     circle(120, 100)
#     end_fill()
#     my_goto(63.56, 218.24)
#     seth(90)
#     eyes()
#     seth(180)
#     penup()
#     fd(60)
#     pendown()
#     seth(90)
#     eyes()
#     penup()
#     seth(180)
#     fd(64)
#
#
# # 头型
# def head():
#     penup()
#     circle(150, 40)
#     pendown()
#     fillcolor('#00a0de')
#     begin_fill()
#     circle(150, 280)
#     end_fill()
#
#
# # 画哆啦A梦
# def Doraemon():
#     # 头部
#     head()
#
#     # 围脖
#     scarf()
#
#     # 脸
#     face()
#
#     # 红鼻子
#     nose()
#
#     # 嘴巴
#     mouth()
#
#     # 胡须
#     beard()
#
#     # 身体
#     my_goto(0, 0)
#     seth(0)
#     penup()
#     circle(150, 50)
#     pendown()
#     seth(30)
#     fd(40)
#     seth(70)
#     circle(-30, 270)
#
#     fillcolor('#00a0de')
#     begin_fill()
#
#     seth(230)
#     fd(80)
#     seth(90)
#     circle(1000, 1)
#     seth(-89)
#     circle(-1000, 10)
#
#     # print(pos())
#
#     seth(180)
#     fd(70)
#     seth(90)
#     circle(30, 180)
#     seth(180)
#     fd(70)
#
#     # print(pos())
#     seth(100)
#     circle(-1000, 9)
#
#     seth(-86)
#     circle(1000, 2)
#     seth(230)
#     fd(40)
#
#     # print(pos())
#
#     circle(-30, 230)
#     seth(45)
#     fd(81)
#     seth(0)
#     fd(203)
#     circle(5, 90)
#     fd(10)
#     circle(5, 90)
#     fd(7)
#     seth(40)
#     circle(150, 10)
#     seth(30)
#     fd(40)
#     end_fill()
#
#     # 左手
#     seth(70)
#     fillcolor('#ffffff')
#     begin_fill()
#     circle(-30)
#     end_fill()
#
#     # 脚
#     my_goto(103.74, -182.59)
#     seth(0)
#     fillcolor('#ffffff')
#     begin_fill()
#     fd(15)
#     circle(-15, 180)
#     fd(90)
#     circle(-15, 180)
#     fd(10)
#     end_fill()
#
#     my_goto(-96.26, -182.59)
#     seth(180)
#     fillcolor('#ffffff')
#     begin_fill()
#     fd(15)
#     circle(15, 180)
#     fd(90)
#     circle(15, 180)
#     fd(10)
#     end_fill()
#
#     # 右手
#     my_goto(-133.97, -91.81)
#     seth(50)
#     fillcolor('#ffffff')
#     begin_fill()
#     circle(30)
#     end_fill()
#
#     # 口袋
#     my_goto(-103.42, 15.09)
#     seth(0)
#     fd(38)
#     seth(230)
#     begin_fill()
#     circle(90, 260)
#     end_fill()
#
#     my_goto(5, -40)
#     seth(0)
#     fd(70)
#     seth(-90)
#     circle(-70, 180)
#     seth(0)
#     fd(70)
#
#     # 铃铛
#     my_goto(-103.42, 15.09)
#     fd(90)
#     seth(70)
#     fillcolor('#ffd200')
#     # print(pos())
#     begin_fill()
#     circle(-20)
#     end_fill()
#     seth(170)
#     fillcolor('#ffd200')
#     begin_fill()
#     circle(-2, 180)
#     seth(10)
#     circle(-100, 22)
#     circle(-2, 180)
#     seth(180 - 10)
#     circle(100, 22)
#     end_fill()
#     goto(-13.42, 15.09)
#     seth(250)
#     circle(20, 110)
#     seth(90)
#     fd(15)
#     dot(10)
#     my_goto(0, -150)
#
#     # 画眼睛
#     black_eyes()
#
#
# if __name__ == '__main__':
#     screensize(800, 600, "#f0f0f0")
#     pensize(3)  # 画笔宽度
#     speed(9)  # 画笔速度
#     Doraemon()
#     my_goto(100, -300)
#     write('by SanTorini', font=("Bradley Hand ITC", 30, "bold"))
#     mainloop()

# #e4.1TextProgress Bar.py
# import time
# scale = 20
# print("------执行开始------")
# for i in range(scale+1):
#     a, b = '**' * i,'..' * (scale - i)
#     c = (i/scale)*100
#     print("%{:^3.0f}[{}->{}]" .format (c, a, b))
#     time.sleep(0.1)
# print("------执行结束------")
#e4.2TextProgressBar.py
# import time
# for i in range(101):
#     print("\r{:2}%".format(i), end="")
#     time.sleep(0.05)

# str = input()
# l,t = str.split(',')
#
# l = int(l)
# t = int(t)
# # if l <= 3:
# ans = 13 + t
# if 3 < l <= 15:
#     ans += 2.3 * (l - 3)
# elif l > 15:
#     ans += 2.3 * 1.5 * (l - 15) + 2.3 * (15 - 3)
#
# print(int(ans))


# distance, wait = map(int, input().split(','))
# if distance <= 3:                               # 如果行驶里程不超过起步里程
#          fee = 13 + wait * 1                         # 收费为起步价与等待费用之和
# elif 3 < distance <= 15:                        # 如果行驶里程超过起步里程但不超过15公里
#          fee = 13 + (distance - 3) * 2.3 + wait * 1  # 收费为起步费+超过3公里的部分2.3元/公里+等待费用
# else:    # 如果行驶里程超过15公里，15公里内的按照（2）计算，超过15公里的基本单价加收50%的费用2.3 * (1 + 0.5)
#          fee = 13 + (15 - 3) * 2.3 + (distance - 15) * 2.3 * (1 + 0.5) + wait * 1
# print("{:.0f}".format(fee))                     # 保留0位小数

# list_pre = [2,1,3,2,1,3,1,2,0,3,1,2,2,3,2,1,2,1,3,2,0,3,1,2,2,3,0,2,3,2,2,1,3,1,3,0,1,1,3,2,1,1,0,3,2,3,1,1,0,2]
#
# wang = 0
# zhao = 0
# li = 0
#
# for i in list_pre:
#     if i == 0:
#         continue
#     elif i == 1:
#         wang += 1
#     elif i == 2:
#         zhao += 1
#     else:
#         li += 1
#
# print("王得票：", wang)
# print("赵得票：", zhao)
# print("李得票：", li)
# if wang > zhao and wang > li:
#     ans = "王"
# elif zhao > wang and zhao > li:
#     ans = "赵"
# else:
#     ans = "李"
# print("班长是：", ans)

# def DataMasking():
#     mask = [input().split() for i in range(n)]
#     for item in mask:
#         item[0] = item[0][:4] + '*' * 7 + item[0][11:]
#         item[1] = item[1][0] + '*' + item[1][2:]
#         item[2] = item[2][:3] + '*' * 4 + item[2][7:]
#     return mask
#
#
# if __name__ == '__main__':
#     n = int(input())
#     print('ERROR') if n <= 0 else print(DataMasking())

# def func():
#     cur = [input().split() for i in range(n)]
#     for i in cur:
#         i[0] = i[0][:4] + '*' * 7 + i[0][11:]
#         i[1] = i[1][0] + '*' + i[1][2:]
#         i[2] = i[2][:3] + '*' * 4 + i[2][7:]
#     return cur
#
# if __name__ == '__main__':
#     n = int(input())
#     print('ERROR') if n <= 0 else print(func())

chinese_number=("零","壹","贰","叁","肆","伍","陆","柒","捌","玖")
chinese_unit1=("元","拾","佰","仟","万")
chinese_unit2=("分","角")

n = input()

print("小写报销金额是")
print(n)
print("大写报销金额是")



