import math
def liniowe(a, b):
    if a == 0:
        if b == 0: 
            print("Identity Equation")
        else:
            print("Contrary Equation")
    else:
        x = -b / a
        print('x = ', x)
a = float(input('a = '))
b = float(input('b = '))
c = float(input('c = '))
if a == 0:
    liniowe(b,c)
else:
    delta = b * b - 4 * a * c
    if delta < 0:
        print("Lack of Solutions")
    elif delta == 0:
        x=-b / (2 * a)
        print("one solution x = ", x)
    else:
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b - math.sqrt(delta)) / (2 * a)
        print('x1 = ', x1)
        print('x2 = ', x2)
