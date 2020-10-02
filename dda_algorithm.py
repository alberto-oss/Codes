import turtle
import math
import time


x1,y1 = map(int, input().split())
x2,y2 = map(int, input().split())
dx, dy = abs(x1-x2), abs(y1-y2)
length = max(dx,dy)
dx = (x2-x1)/length
dy = (y2-y1)/length
x, y = x1, y1
turtle.penup()
turtle.goto(x1,y1)
turtle.pendown()
turtle.write('P')
for i in range(1, length+1):
    x+=dx
    y+=dy
    i+=1
    turtle.goto(x,y)
turtle.write('Q')
turtle.penup()
turtle.hideturtle()
turtle.done()
