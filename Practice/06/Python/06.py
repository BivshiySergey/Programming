a = int(input())
b = int(input())
c = int(input())
x = int
x1 = int 
x2 = int 
D = pow(b , 2) - 4 * a * c
if a == 0 :
   x = -c / b
   print("x=" + str(x))
elif D == 0 :
	x = -b/(2 * a)
	print ("x=" + str(x))
elif D > 0 :
	x1 = (-b - pow(D , 0.5))/(2 * a)
	x2 = (-b + pow(D , 0,5))/(2 * a)
	print ("x1 = " + str(x1) + "x2 = " + str(x2))
else:
	print("Корней нет")
