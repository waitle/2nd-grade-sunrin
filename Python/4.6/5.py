get = int(input("input"))
plus=0
while 1:
    if(get%10==0):
        break
    get=int(get)
    plus+=get%10
    get/=10
print(plus)
