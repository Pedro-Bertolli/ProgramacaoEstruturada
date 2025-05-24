//Faça um programa que receba 10 valores em um vetor de números reais
//Esses valores representarão o gasto de cada apartamento referente a energia elétrica
//Deseja-se saber qual o maior valor e o número do apartamento


#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL,"Portuguese");
	
	float vetor[10], maiorvalor=0;
	int i, imaiorgasto;
	
	for(i=0;i<10;i++){
		cout<<"Informe o valor do gasto de energia eletrica: ";
		cin>>vetor[i];
		
		if(vetor[i]>maiorvalor){
			maiorvalor = vetor[i];
			imaiorgasto=i;
		}
	
    }
    
    cout<<"O maior valor e: "<<maiorvalor<<"  Apartamento: "<<imaiorgasto+1;
	
	return 0;
}
