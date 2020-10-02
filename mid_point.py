import turtle
import math
import time

def midpointCircle(x_c,y_c,r):
    x = r
    y = 0
    turtle.color("purple")
    turtle.penup()
    turtle.goto(x+x_c,y+y_c)
    turtle.pendown()
    p = 1 - r
    while x >= y:
        y += 1
        if p <= 0 :
            p += (2*y)+1
        else :
            p += (2*(y-x))+1
            x -= 1
        if (x < y):
            break    
        
        turtle.goto(x_c+x,y_c+y) 
        turtle.goto(x_c-x,y_c+y)  
        turtle.goto(x_c+x,y_c-y)  
        turtle.goto(x_c-x,y_c-y) 
        if x != y: 
            turtle.goto(x_c+y,y_c+x)  
            turtle.goto(x_c-y,y_c+x)  
            turtle.goto(x_c+y,y_c-x)  
            turtle.goto(x_c-y,y_c-x)  
    turtle.penup()
    turtle.hideturtle()
    turtle.done()    

x = int(input("x:\n"))
y = int(input("y:\n"))
r = int(input("radius:\n"))
midpointCircle(x,y,r)
