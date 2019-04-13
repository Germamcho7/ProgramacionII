#include <iostream>

using namespace std;

int &func(int &a ){
	cout << a << endl;
return a;
}

int main() {
	int s=5;
	cout << s << endl;
	 func(s)=50;
	cout << s << endl;;
	return 0;
}
