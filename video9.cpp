#include<stdio.h>
#include<conio.h>

main(){
	
	int arreglo [10];
	int longitud = 10;
	for(int i=0;i<longitud;i++){
		printf("Escribe el valor %d: ",i+1);
		scanf("%d",&arreglo[i]);
	}
	
	for(int i=0;i<longitud;i++){//Vueltas que necesitamos
		for(int j=0;j<longitud-1;j++){
			if(arreglo[j]>arreglo[j+1]){
				int temp = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = temp;
			}
		}
	}
	
	for(int i=0;i<longitud;i++){
		printf("%d ",arreglo[i]);
	}
	getch();
	
}
