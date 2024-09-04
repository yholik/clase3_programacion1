#include <iostream>
using namespace std;

int main(){
	int a;
	cout << "Ingrese el anio" << endl;
	cin >> a;
	if(a % 400 == 0){
		cout << "Es bisiesto" << endl;
	} else {
		if (a % 4 == 0 && a % 100 != 0){
			cout << "Es bisiesto" << endl;
		} else {
			cout << "No es bisiesto" << endl;
		}
	}
	
	return 0;
}
