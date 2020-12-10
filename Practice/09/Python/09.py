i = 1
while i > 0:
	print("Введите время прибытия первого человека: ")
	h1 , m1 = map(int,input().split(":"))
	print("Введите время прибытия второго человека: ")
	h2 , m2 = map(int,input().split(":"))
	if h1 > 23 or h1 < 0 or h2 > 23 or h2 < 0 or m1 > 59 or m1 < 0 or m2 > 59 or m2 < 0:
		print("Неверный формат времени")
	elif (abs(m2 - m1) <= 15) or ((h2 - h1 == 1) and (m2 - m1 + 60 <= 15)) or ((h2 - h1 == -23) and (m2 - m1 + 60 <= 15)):
		print("Встреча состоится")
		break
	else:
		print("Встреча не состоится")
		break