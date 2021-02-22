#include "complexe.h"

complexe::complexe(double a, double b)
{
	Re = a;
	Img = b;
}
void complexe::afficher()
{
	cout << Re;

	//Pour ne pas afficher 4 + -6i (si Img est negatif)
	if (Img >= 0)
		cout << " + ";

	cout << Img << "i" << endl;
}

double complexe::module()

{
	return sqrt(Re * Re + Img + Img);
}

complexe complexe::conjugue()
{
	complexe c;
	c.Re = Re;
	c.Img = -Img;
	return c;
}

complexe complexe::operator+(complexe a)
{
	complexe s;
	s.Re = Re + a.Re;
	s.Img = Img + a.Img;
	return s;
}

complexe complexe::operator+(double x)
{
	complexe s;
	s.Re = Re + x;
	s.Img = Img;
	return s;
}

complexe complexe::operator-(complexe a)
{
	complexe s;
	s.Re = Re - a.Re;
	s.Img = Img - a.Img;
	return s;
}

complexe complexe::operator*(complexe a)
{
	complexe p;
	p.Re = Re * a.Re - Img * a.Img;
	p.Img = Re * a.Img + Img * a.Re;
	return p;
}
