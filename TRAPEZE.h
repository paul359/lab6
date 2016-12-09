#include<iostream>
#include"Figure.h"
using namespace std;

class Trapeze : public Figure {
public:
	Trapeze(void);
	~Trapeze(void);
	Trapeze(int side_y, int side_x, int high_a);
	Trapeze(Trapeze& copy);
	Trapeze(istream &is);

	friend istream& operator >> (istream& is, Trapeze& obj);

	double Square() override;
	void Print() override;




private:

	int side_y;
	int side_x;
	int high_a;

};


