#include <iostream>

using namespace std;

int main(){
	
	float nota1T, nota2AS, nota3EF, mediap; 
	
	cout<<"Informe sua primeira nota: ";
	cin>>nota1T;
	
	cout<<"Informe sua segunda nota: ";
	cin>>nota2AS;
	
	cout<<"Informe sua terceira nota: ";
	cin>>nota3EF;
	
	mediap = (nota1T * 0.2) + (nota2AS * 0.3) + (nota3EF * 0.5);
	
	cout<<"MEDIA PONDERADA: "<<mediap;
	
	if (mediap <= 10 && mediap >= 8){
		cout<<"\nNota A!";
}
	else if (mediap < 8 && mediap >= 7){
		cout<<"\nNota B!";
	}
	
	else if (mediap < 7 && mediap >= 6){
		cout<<"\nNota C!";
	}
	
	else if (mediap < 6 && mediap >= 5){
		cout<<"\nNota D!";
	}
	
	else{
		cout<<"\nNota E!";
	}
		
		system("PAUSE");
		return 0;
		
		
}
