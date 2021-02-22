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
	

	//Op�rateur : complexe + complexe
	complexe operator+(complexe a);

	//Op�rateur : complexe + double
	complexe operator+(double x);
	
	//Op�rateur : complexe - complexe
	complexe operator-(complexe a);

	//Op�rateur : complexe * complexe
	complexe operator*(complexe a);
	


};
