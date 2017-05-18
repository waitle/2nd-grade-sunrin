fhand = open('mbox-short.txt')
f = open(r"C:\Users\Sunrin\Desktop\5.11\new.txt", 'w')
fuck=[]
fuck2=[]
for line in fhand:
    if(line.find("From:")!=-1):
        temp=line[6:]
        fuck.append(temp)
for i in range(len(fuck)-1):
    if(fuck[i]==fuck[i+1]):
        continue
    else:
        fuck2.append(fuck[i])
a="".join(fuck2)
print(a, end="")
f.write(a)
fhand.close()
