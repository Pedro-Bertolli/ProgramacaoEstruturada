/*

Criar automaticamente a matriz ao lado.

*O segredo está nos índices.

*/

#include <iostream>
#include <string.h>
#include <locale.h>


#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL,"Portuguese");
	
	srand(time(NULL));

	int matriz[5][5], i, j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			matriz[i][j] = rand () %11;
			if (i==j){
				matriz[i][j] = 1;
			}
			else{
				matriz[i][j] = 0;
			}
			}
		}
		
	for(i=0;i<5;i++){
		cout<<"\n";
		for(j=0;j<5;j++){
			cout<<matriz[i][j]<<"\t";
		}
	}





	return 0;
}
