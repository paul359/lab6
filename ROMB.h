#include<iostream>
#include"Figure.h"
using namespace std;

class Romb :public Figure
{
public:
	Romb(void);
	Romb(int diag_a, int diag_b);
	Romb(Romb& copy);
	Romb(istream &is);


	double Square() override;
	void Print() override;

	friend istream& operator >> (istream& is, Romb& obj);

	~Romb(void);
private:
	int diag_a;
	int diag_b;
};
