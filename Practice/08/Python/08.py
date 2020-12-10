otv = float
i = 1
while i > 0:
	a = int(input("Введите первое число: "))
	b = str(input("Введите символ операции: "))
	c = int(input("Введите второе число: "))
	if c == 0 and b == "/" :
		print("Деление на 0 невозможно")
	elif b == "+":
		otv = a + c
		print (str(otv))
		break
	elif b == "*":
		otv = a * c
		print (str(otv))
		break
	elif b == "-":
		otv = a - c
		print (str(otv))
		break
	elif b == "/":
		otv = a / c
		print (str(otv))
		break
	else:
		print("Введен ошибочный символ операции")