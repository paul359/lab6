#include "Romb.h"
#include <iostream>

Romb::Romb(void) {

}

Romb::Romb(int i, int j) :diag_a(i), diag_b(j) {
	cout << "Romb created" << diag_a << "," << diag_b << endl;

}
Romb::Romb(istream &is) {
	is >> diag_a;
	is >> diag_b;
}

Romb::Romb(Romb& copy) {

	diag_a = copy.diag_a;
	diag_b = copy.diag_b;
	//cout<<"Copy created"<<endl;
}

double Romb::Square() {
	double p;
	p = diag_a*diag_b / 2;
	return p;
}



istream& operator >> (istream& is, Romb& obj) {
	is >> obj.diag_a;
	is >> obj.diag_b;
	return is;
}

using namespace std;

void Romb::Print() {
	cout << endl;
	cout << "[Romb:" << "First diag a=" << diag_a << ";" << "Second diag b=" << diag_b << "]" << endl;
}

Romb::~Romb(void) {
	cout <<"Romb deleted"<<  endl;
}
