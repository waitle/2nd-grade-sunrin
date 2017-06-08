import turtle as t

t.shape("turtle")
t.speed(5000)
t.color("purple")
t.width("3")
f=500
for i in range(0, 8):
    
    t.forward(f)
    t.left(120)
    f = f -20
    t.forward(f)
    t.left(120)
    f = f -20
    t.forward(f)
    t.left(120)
    f = f -20

t.penup()
t.goto(-100, -100)
t.pendown()
r =20
for i in range(0, 12):
    t.circle(r)
    r+=15
