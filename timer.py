import time,keyboard
timerstatus=False
currenttime=0
pausetot=0
timerstart=0
def timer():
    print("1 开始计时\n2 停止计时\n3 计次(开始)、复位(停止)\n4 退出")
    timerfirstflag=1
    global currenttime
    global pausetot
    global timerstart
    global timerstatus
    time.sleep(0.5)
    while True:
        while timerstatus:
            currenttime=time.time()
            print(currenttime-timerstart)
            time.sleep(1.001)
            if keyboard.is_pressed('2'):
                timerstatus=0
                print("停止计时！")
        if keyboard.is_pressed('1'):
            if timerfirstflag:
                timerstart=time.time()
                timerfirstflag=False
            timerstatus=1
            print("开始计时！")
        if keyboard.is_pressed('4'):
            print("退出！")
            break

if __name__=='__main__':
    timer()