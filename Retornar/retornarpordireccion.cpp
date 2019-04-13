#include <iostream>
using namespace std;

     int* func(int n){
     int* p= new int(n);
     cout << p << endl;
 

     for(int i=0; i<n; i++){
           p[i] = i++;
      }
return p;
}

int main(){

int tamano = 5;
int* q = func(tamano);

cout << q << endl;


	for (int i=0; i<tamano; i++){

	cout << q[i] << endl;
	}
return 0;
}
