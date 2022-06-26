#include <stdio.h>
#include <conio.h>

main(){
	int cant,num,suma;
	float prom;
	printf("Escribe la cantidad de numeros a promediar: ");
	scanf("%d",&cant);
	for(int i=1;i<=cant;i++){
		printf("Escribe el numero %d :",i);
		scanf("%d",&num);
		suma = suma + num;
	}
	prom = suma / (float) cant;
	printf("El promedio es: %.2f ",prom);
	getch();
}
