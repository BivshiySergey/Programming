from array import *
x = 1
i = 1
ar = array('i',[])
while i > 0:
	n = int(input())
	if n > 0:
		while x < (n + 1):
			ar.append(x)	
			x *= 2
		print(len(ar))
		break
	elif n == 0:
		print(0)
		break
	else:
		print("Ошибочный ввод")

