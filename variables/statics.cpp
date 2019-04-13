#include <iostream>

using namespace std;
int static  contador=0;
void funk(){
	contador++;
int static n =15;
	cout << n << endl;
	n++;
	cout << n << endl;
	cout << contador << endl;
}


int main(){
	funk();
	funk();

return 0;
}
