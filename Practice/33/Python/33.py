import sys
_print=print
def create(Length ,nch = 0, step = 0):
	arr=[]
	for i in range(1,Length):
		arr[i] = nch
		nch += step
	return arr
def sort(arr, Length):
	for i in range(1, Length):
		for j in range(i, 1, -1):
				if(arr[j]<arr[j-1]):
					arr[j] , arr[j-1] = arr[j-1], arr[j]
	return arr
def print(arr, Length):
	_print("[",arr[0],sep='',end = ',')
	for i in range(1,Length):
		print(arr[i],sep = ',',end = ']')
	return arr
_print("Enter length,start value and step")
Length = int(input())
nch = int(input())
step = int(input())
arr = create(Length, nch, step)
sort(arr, Length)
print(arr, Length)