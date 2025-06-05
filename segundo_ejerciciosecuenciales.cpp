#include <iostream>

using namespace std;
int main(){
	double sol, dolar, tasadecambio;
	cout<<"ingrese el valor en soles"<<endl;
	cin>>sol;
	cout<<"ingrese el valor de la tasa de cambio"<<endl;
	cin>>tasadecambio;
	dolar=sol/tasadecambio;
	cout<<"el valor en dolares es: "<<dolar<<endl;
	return 0;
	
}
