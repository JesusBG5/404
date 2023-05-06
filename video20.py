def factorial(num):
	if num>1:
		return num * factorial(num-1)
	return 1

print("El resultado es: " + str(factorial(5)))
input()