#include <iostream>
using namespace std;

int main(){
	int a, b, opc, total;
	bool flag = true;
	cout << "Ingrese dos numeros: " << endl;
	cin >> a >> b;
	cout << "Seleccione la operacion: 1)Sumar 2)Restar 3)Multiplicar 4)Dividir" << endl;
	cin >> opc;
	do{
	switch(opc){
		case 1: 
		total = a + b;
		flag = false;
			break; 
			case 2: 
			total = a - b;
			flag = false;
				break;
				case 3: 
				total = a * b;
				flag = false;
					break;
					case 4: 
					total = a / b;
					flag = false;
						break;
						default: 
						cout << "La opcion ingresada es invalida" << endl;
							break;
	} 
	} while(opc >= 1 || opc <=4);
	cout << "El resultado de la operacion es: " << total;
	
	return 0;
}
