def computegrade(score):
    if score >=0.9:
        print("A")
    elif score >=0.8:
        print("B")
    elif score >=0.7:
        print("C")
    elif score >=0.6:
        print("D")
    else:
        print("bad score")
try:
    score = float(input("enter score"))
except:
    print("bad score")
computegrade(score)
