#include <iostream>
#include <math.h>

using namespace std;

class Rectangulo{
	public:

	double a;
	double b;

	double calcularPerimetro()
	{
		return 2*(a+b);
	};
	double calcularArea()
	{
		return a*b;
	};
	double calcularDiagonal()

	{
		return sqrt(pow(a,2)+pow(b,2));
	};
	};
int main(){

	Rectangulo r1, r2, r3;
	r1.a = 5.2;
	r1.b = 2.2;

	cout << r1.calcularPerimetro() << endl;
	cout << r1.calcularArea() << endl;
	cout << r1.calcularDiagonal() << endl;
	
	return 0;

	}
