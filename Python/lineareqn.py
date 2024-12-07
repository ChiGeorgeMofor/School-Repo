a = float(input('a = '))
b = float(input('b = '))
if a == 0:
    if b == 0: 
        print('Identity Equation')
    else:
        print('Contrary Equation')
else:
    x = -b/a
    print('x =', x)
