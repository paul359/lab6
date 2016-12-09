#include "Trapeze.h"
#include<iostream>
#include<cmath>

using namespace std;

Trapeze::Trapeze(void) {

}


Trapeze::Trapeze(int side_y, int side_x, int high_a)
{

	cout << "Trapeze created" << side_x << "," << side_y << "," << high_a << "," << side_y << endl;
}

Trapeze::Trapeze(Trapeze& copy)
{

	side_x = copy.side_x;
	side_y = copy.side_y;
	high_a = copy.high_a;

	//cout<<"Copy created"<<endl;
}
Trapeze::Trapeze(istream &is)
{
	is >> side_x;
	is >> high_a;
	is >> side_y;

}

istream& operator >> (istream& is, Trapeze& obj) {

	is >> obj.side_y;
	is >> obj.side_x;
	is >> obj.high_a;

	return is;
}


double Trapeze::Square()
{
	double s = high_a * (side_y + side_x) / 2;
	return s;
}
void  Trapeze::Print()
{
	cout << endl;
	cout << "[Trapeze:" << "1st Side=" << side_x << ";" << "2nd Side=" << side_y << ";" << "High=" << high_a << "]" << endl;
}
Trapeze::~Trapeze(void)
{
	cout << "Trapeze deleeted" << endl;
}
