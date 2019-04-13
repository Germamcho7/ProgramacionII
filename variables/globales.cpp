#include <iostream>

using namespace std;
 int i;

int finc(int n) {
	int i=15;
	cout << i << endl;
	return i;
	}
int main () {
	int i  = 15;
	{
	int i = 20;
	cout << :: i << endl;  //el comando :: devuelve el valor primero  fuera del alcance total
	}
	::cout << i << ::endl;
return 0;
}
