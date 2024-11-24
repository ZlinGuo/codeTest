# print("欢迎来到 XXX 系统，请登录：")
Dict1 = {'zhangsan': '123456', 'lisi': '000000', 'wangwu': '654321', 'zhaoliu': '111111'}
# **********begin**********
name = input()
cnt = 0
flag = 0
i = 0
if name in Dict1:

    while cnt < 3:
        passwd = input()
        if passwd != '':
            i += 1
        if passwd == Dict1[name]:
            print("登录成功")
            flag = 1
            break
        else:
            cnt += 1

    if i == 2:
        print("密码错误，请重新输入")
    elif i == 3:
        print("密码错误三次，账号已锁定")
else:
    print("请注册")

    # ********** end **********