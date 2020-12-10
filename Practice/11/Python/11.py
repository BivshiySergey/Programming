i = 1
c = 1
while i > 0:
	a = int(input("Введите число,возводимое в степень: "))
	b = int(input("Введите степень,в которую возводится число: "))
	if a == 0 and b < 0:
		print("Попытка поделить на 0")
	elif b > 0:
	 	while b > 0:
	 		c *= a
 			b -= 1
 		print(str(c))
 		break
	elif b < 0:
		while b < 0:
			c = c * 1/a
			b += 1
		print(str(c))
		break
	else:
		print(1)
		break