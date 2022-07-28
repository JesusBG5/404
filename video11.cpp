#include<stdio.h>
#include<conio.h>

int fibonacci(int n);

main(){
	/*int a,b,c,n;
	a= 0;
	b= 1;
	printf("Escribe el numero : ");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(int i=2;i<n;i++){
		c=a+b;
		a = b;
		b = c;	
		printf(" %d ",c);
	}
	getch();*/
	printf("El resultado es: %d",fibonacci(4));
}

int fibonacci(int n){
	if(n<=2){
		return n;
	}else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
