#include<stdio.h>

float soma(float primeiroNumero, float segundoNumero){
	return primeiroNumero + segundoNumero;
}
void pulaLinha(){
	printf("\n");
}

main(){
	float numero1, numero2, resultado;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero1);
	pulaLinha();
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	pulaLinha();
	
	resultado = soma(numero1, numero2);
	
	printf("O resultado da soma eh: %.2f", resultado);
	
}
