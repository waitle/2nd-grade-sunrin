STUDENTS = 5
highScore=0
a=[STUDENTS]
asum=0
for i in range(STUDENTS):
    get = int(input("input your grade"))
    a.append(get)
    asum= asum + get
    if get>=60:
        highScore = highScore+1
Avg = asum/5
print("성적 평균은", Avg, "입니다.")
print("60점 이상 성적을 받은 학생은", highScore, "명입니다.")
