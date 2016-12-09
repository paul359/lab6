
#include "Pentagon.h"
#include <iostream>
#include <cmath> 

using namespace std;

Pentagon::Pentagon(void) {

}


Pentagon::Pentagon(int i) :side_a(i) {
	cout << "Pentagon created" << side_a << endl;

}
Pentagon::Pentagon(istream &is) {

	is >> side_a;

}

Pentagon::Pentagon(Pentagon& copy) {

	side_a = copy.side_a;

}

double Pentagon::Square() {
	double s = 1;
	//double s = (5 * side_a ^ 2) / (4 * tan(36));
	return s;

}

istream& operator >> (istream& is, Pentagon& obj) {
	is >> obj.side_a;
	return is;
}



void Pentagon::Print() {
	cout << endl;
	cout << "[Pentagon:" << "Side a=" << side_a << "]" << endl;
}

Pentagon::~Pentagon(void)
{
	cout << "Pentagon deleeted" << endl;
}
