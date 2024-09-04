#include <iostream>
using namespace std;

int main(){
	int anio;
	cout << "Ingrese el anio: " << endl;
	cin >> anio;
	if(anio % 4 == 0){
		cout << "El anio es bisiesto" << endl;
	} else {
		cout << "El anio no es bisiesto" << endl;
	}
	
	return 0;
}
