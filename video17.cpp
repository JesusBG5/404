#include<stdio.h>
#include<stdlib.h>

void imprimir();
void ordenar();
void llenar();

int arreglo [10];
int tam = 10;

main(){
	llenar();
	imprimir();
	ordenar();
	imprimir();
}

void llenar(){
	for(int i=0;i<tam;i++){
		//printf("Escribe el valor de la posicion %d : ", i);
		//scanf("%d",&arreglo[i]);
		arreglo[i] = rand() % 10 + 1;
	}
}

void imprimir(){
	printf("El arreglo es: \n");
	for(int i=0;i<tam;i++){
		printf("%d ",arreglo[i]);
	}
	printf("\n");
}

void ordenar(){
	for(int i=0;i<tam;i++){
		int min = i;
		for(int j=i+1;j<tam;j++){
			if(arreglo[j]<arreglo[min]){
				min = j;
			}
		}
		int temp = arreglo[i];
		arreglo[i] = arreglo[min];
		arreglo[min] = temp;
	}
}
