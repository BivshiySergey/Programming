import random
i = 1
popitki = 0
print("Попробуйте угадать число от 0 до 100,у вас 5 попыток: ")
while i > 0:
	casino = random.randint(0,100)	
	for popitki in range (5):
		chislo = int(input())
		if chislo < casino and popitki !=4 :
			print("Загаданное число больше ")
		elif chislo > casino and popitki !=4:
			print("Загаданное число меньше ")
		elif chislo == casino  :
			print("Поздравляю,Вы угадали! ")
			status = int(input("Хотите начать сначала? 1 - ДА: "))
			if status == 1:
				break
			else :
				exit(0)
		elif popitki == 4:
			print("Вы проиграли.Было загадано " + str(casino))
			status = int(input("Хотите начать сначала? 1 - ДА: "))
			if status == 1:
				break
			else :
				exit(0)
