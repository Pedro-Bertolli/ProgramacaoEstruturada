#include <iostream>

using namespace std;

int main(){
	
	float n1, n2;
	
	cout<<"Digite um número: ";
	cin>>n1;
	
	cout<<"Digite outro número: ";
	cin>>n2;
	
	if (n1 > n2){
	
		cout<<"O número "<<n1<< " é maior que o número "<<n2;
   }
	else{
		cout<<"O número "<<n2<< " é maior que o número "<<n1<<"\n";
		
	}
		
		
	system ("PAUSE");
	return 0;
}
