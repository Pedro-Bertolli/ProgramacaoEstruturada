#include <iostream>

using namespace std;

int main() {
	
	//nesse exercício vamos mostrar os resultados
	//das operações básicas de matemática
	//utilizando 6 variáveis de números reais(float)
	float n1=40, n2=3, soma, diferenca, divisao, multiplicacao;
	
	soma=n1+n2;
	diferenca=n1-n2;
	divisao=n1/n2;
	multiplicacao=n1*n2;
	
	cout<<"Soma: "<<soma<<"\nDiferenca: "<<diferenca
		<<"\nDivisão: "<<divisao<<"\nMultiplicacao: "<<multiplicacao;
		
	//getchar cria uma pausa no sistema esperando o usuário
	//digitar alguma coisa
	getchar();
	return 0;
	
}
