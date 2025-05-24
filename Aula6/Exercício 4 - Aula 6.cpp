//Fa�a um programa que preencha um vetor com 8 posi��es.
//Calcule e mostre dois vetores resultantes
//O primeiro vetor resultante deve conter os n�meros positivos.
//O segundo vetor resultante deve conter os n�meros negativos.
//Cada vetor resultante vai ter, no m�ximo 8 posi��es (por que?)


#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL,"Portuguese");
	
	int vetor[8], vetorpos[8], vetorneg[8];
	int ineg=0, ipos=0, i;
	
	for(i=0;i<8;i++){
		cout<<"Informe um n�mero positivo ou negativo para a "<<i+1<<"� posicao: ";
		cin>>vetor[i];
		
		//Verifica se � positivo ou negativo.
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
