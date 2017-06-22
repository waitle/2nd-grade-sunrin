import math

def Circle(r):
    return (r*math.pi*r, r*2*math.pi)

radius = float(input("원의 반지름을 입력하시오: "))
(a, c) = Circle(radius)
print("원의 넓이는 "+str(a)+"이고 원의 둘레는"+str(c)+"이다.")
