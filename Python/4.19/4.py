import random
counter=[0, 0, 0, 0, 0, 0]
for i in range(0, 1000):
    val=random.randint(0, 5)
    counter[val]+=1
print(counter)
