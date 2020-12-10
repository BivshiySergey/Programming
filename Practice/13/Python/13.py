from array import *
ar = array('i',[])
zi = 1
while zi > 0:
	a = int(input("Введите число: "))
	if a < 2:
		print("Введите число, больше либо равно 2")
	else :
		for i in range(2 , a):
			if a % i == 0:
				break
			else:
				i += 1
				ar.append(i)
		if len(ar) == a - 2:
			print("Простое")
			break
		else:
			print("Составное")
			break

