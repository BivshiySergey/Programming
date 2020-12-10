p = int
s = int
AB = int
BC = int
AC = int
i = 1
print("1 - Ввод длин сторон ")
print("2 - Ввод координат вершин ")
while i > 0:
	ind = int(input())
	if ind == 1:
		a , b , c = int(input()) , int(input()) , int(input())
		p = (a + b + c )/ 2
		s = pow((p * (p - a) * (p - b) * (p - c)) , 0.5)
		print("S=" + str(s))
		break
	elif ind == 2:
		xA, yA = map(int, input().split())
		xB, yB = map(int, input().split())
		xC, yC = map(int, input().split())
		AB = pow(pow((xB - xA), 2) + pow((yB - yA), 2) ,0.5)
		BC = pow(pow((xC - xB), 2) + pow((yC - yB), 2) ,0.5)
		AC = pow(pow((xC - xA), 2) + pow((yC - yA), 2) ,0.5)
		p = (AB + BC + AC)/ 2
		s = pow((p * (p - AB) * (p - BC) * (p - AC)) , 0.5)
		print("S=" + str(s))
		break
	else :
		print("Ошибочный ввод")