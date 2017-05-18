fhand = open('romeo.txt')
f = open(r"new.txt", 'w')
fuck=[]
fuck2=[]
for line in fhand:
    if(line.find(" ")!=-1):
        temp=line.split()
        fuck.append(temp)
for i in range(len(fuck)):
    if(fuck.index(fuck[i])):
        continue
    else:
        fuck2.append(fuck[i])
fuck2.sort()
print(fuck2)
fhand.close()
