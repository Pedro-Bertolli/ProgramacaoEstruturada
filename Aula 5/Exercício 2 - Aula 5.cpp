//Um professor precisa calcular a m�dia aritm�tica de 4 notas.
//As notas de cada prova variam de 0 a 10.
//Fa�a um programa utilizando la�o de repeti��o que receba as 4 notas e mostre a m�dia. Fa�a com o while()

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int contador=1;
	float nota, media=0, contaNota;
	
	while (contador<=4){
		cout<<"Informe a "<<contador<<" nota: ";
		cin>>nota;//recebe a nota
		
		contaNota = contaNota+nota;//acumula notas
		
		contador++;//conta itera��es
	}
	
	media =contaNota/(contador-1);//contador valia 5, ele sempre conta uma vez a mais do que a que foi colocada
	cout<<"A m�dia � igual a: "<<media;	
	return 0;
	
	
	
}
	




