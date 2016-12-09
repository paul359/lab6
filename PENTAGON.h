#include<iostream>
#include"Figure.h"
#include <cstdlib>
#include <iostream> 

using namespace std;

class Pentagon :public Figure
{
public:
	Pentagon(void);

	Pentagon(int side_a);
	Pentagon(Pentagon& copy);
	Pentagon(istream &is);


	double Square() override;
	void Print() override;

	friend istream& operator >> (istream& is, Pentagon& obj);

	~Pentagon(void);

private:
	int side_a;

};
