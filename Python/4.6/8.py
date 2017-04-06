import random
a=int(random.randint(1, 100))
b=int(random.randint(1, 100))
print(a, "-", b)
c=int(input())
if(c==a-b):
    print("correct")
else:
    print("go study")
