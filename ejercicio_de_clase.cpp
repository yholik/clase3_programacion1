#include <iostream>
using namespace std;
#define MAX(x,y) x>y?x:y
#define MIN(x,y) x<y?x:y

int main(){
	
	int a, b, c, mayor, menor, medio;
	cout << "Ingrese tres numeros: " << endl;
	cin >> a >> b >> c ;
	
	if(a>b && a>c){
		mayor = a;
		medio = MAX(b,c);
		menor = MIN(b,c);
	} else {
		if( b>a && b>c){
			mayor = b;
			medio = MAX(a,c);
			menor = MIN(a,c);
		} else {
			mayor = c;
			medio = MAX(a, b);
			menor= MIN(a,b);
		}
	}
	
	cout << "Mayor: " << mayor << " Menor: " << menor << " Medio: " << medio << endl;
	
	return 0;
}
