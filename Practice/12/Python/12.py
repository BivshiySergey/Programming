i = 1
zi = 1
while zi > 0:
	n = int(input())
	if n > 0:
		while n > 0:
			i *= n
			n -= 1
		print(str(i))
		break
	elif n == 0:
		print(0)
		break
	else:
		print("Невозможно посчитать факториал данного числа")