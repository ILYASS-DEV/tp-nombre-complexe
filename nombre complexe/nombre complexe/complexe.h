#include <iostream>
#include <cmath>

using namespace std;

class complexe {
	double Re;
	double Img;

public:
	complexe(double a = 0, double b = 0);
	void afficher();
	double module();
	complexe conjugue();
	

	//Opérateur : complexe + complexe
	complexe operator+(complexe a);

	//Opérateur : complexe + double
	complexe operator+(double x);
	
	//Opérateur : complexe - complexe
	complexe operator-(complexe a);

	//Opérateur : complexe * complexe
	complexe operator*(complexe a);
	


};
