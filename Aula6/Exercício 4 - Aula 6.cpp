//Faça um programa que preencha um vetor com 8 posições.
//Calcule e mostre dois vetores resultantes
//O primeiro vetor resultante deve conter os números positivos.
//O segundo vetor resultante deve conter os números negativos.
//Cada vetor resultante vai ter, no máximo 8 posições (por que?)


#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL,"Portuguese");
	
	int vetor[8], vetorpos[8], vetorneg[8];
	int ineg=0, ipos=0, i;
	
	for(i=0;i<8;i++){
		cout<<"Informe um número positivo ou negativo para a "<<i+1<<"ª posicao: ";
		cin>>vetor[i];
		
		//Verifica se é positivo ou negativo.
		if(vetor[i]<0){
			vetorneg[ineg] = vetor[i];
			ineg++;	
		}
		else{
			vetorpos[ipos] = vetor[i];
			ipos++;
		}
		
		
	}
	
	cout<<"Valores Negativos: ";
	for(i=0;i<ineg;i++){
	cout<<"[ "<<vetorneg[i]<<" ]";
    }
    
    cout<<"\nValores Positivos: ";
    for(i=0;i<ipos;i++){
    	cout<<"[ "<<vetorpos[i]<<" ]";
	}
	
	return 0;
		
}
