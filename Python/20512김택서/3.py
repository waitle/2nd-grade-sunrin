list =["Banana","good","things","must","come","to","an","end"]
print("[", end="")
for i in range(len(list)):
    a= list[i]
    print("'",a[0],"',",end = "")
    if a[0]=='e':
         print("'",a[0],"'",end = "")
   
print("]")
