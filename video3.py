# 4! = 4x3x2x1 = 24 
# 5! = 5x4x3x2x1 = 120
# 1*4 = 4 * 3 = 12 * 2 = 24 * 1 = 24
def factorial(n,res):
	if n>=1:
		res = res * n
		factorial(n-1,res)
	else:
		print("El factorial es: " + str(res))

factorial(4,1)