def computepay(a=int(input("enter hours: ")), b=int(input("enter rate: "))):
    if a>=40:
        print((b*40)+((a-40)*(b*1.5)))
    else:
        print(a*b)
computepay()
