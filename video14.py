def ordenamientoBurbuja():
	arreglo = [5,6,2,1,9,10,3,8,7,5,1,10]

	print("Arreglo original: ")
	print(arreglo)
	for i in range(len(arreglo)):
		for j in range(len(arreglo)-1):
			if arreglo[j]<arreglo[j+1]:
				#Se hace el intercambio
				arreglo[j], arreglo[j+1] = arreglo[j+1],arreglo[j]

	print("Arreglo ordenado: ")
	print(arreglo)
	input()
ordenamientoBurbuja()