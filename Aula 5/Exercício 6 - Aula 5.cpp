//Faça um programa que mostre na tela os números ímpares de 0 até 80
//e a média dos números pares.
//resolve tudo isso com um único while.



#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int contador=1;
	int media=0;
	
	while(contador<=80){
		if(contador%2!=0){
			cout<<" "<<contador;
		}
		
		if(contador%2==0){
			media = media + contador / contador;
		}
		
		contador++;
	}
	
	cout<<"\nA media e: "<<media;
	
	
	
	
	return 0;	
}
