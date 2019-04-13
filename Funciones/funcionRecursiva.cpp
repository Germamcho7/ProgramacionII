#include <iostream>

using namespace std;

int factorial(int x) {
	if (x > 0) {
	return  x*factorial(x-1);
	}
	else{
	return 1;
	}
}
int main(){
cout << factorial(3) << endl;
}
