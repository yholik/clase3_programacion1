#include <iostream>
using namespace std;

int main(){
	for(int i = 0; i <=20; i+=2){
		// i+=2 es lo mismo que i = i + 2
		cout << "La variable i tiene el valor: " << i << endl;
	}
	system("PAUSE"); //Detiene la ejecucion del codigo hasta que el usuario oprima una tecla
	return 0;
}
