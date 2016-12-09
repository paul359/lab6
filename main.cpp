#include <memory>
#include <cstdlib>
#include <iostream>
#include "Pentagon.h"
#include "Romb.h"
#include "Trapeze.h"
#include "Figure.h"
#include "TListItem.h"
#include "List.h"
#include <string>
using namespace std;

//fffff



void TestAllocationBlock() {
	TAllocationBlock allocator(sizeof(int), 10);  
	int *a1 = nullptr; 
	int *a2 = nullptr;  
	int *a3 = nullptr; 
	int *a4 = nullptr;
	int *a5 = nullptr;
	a1 = (int*)allocator.allocate();
	*a1 = 1; std::cout << "a1 pointer value:" << *a1 << std::endl;  
	a2 = (int*)allocator.allocate();
	*a2 = 2; std::cout << "a2 pointer value:" << *a2 << std::endl; 
	a3 = (int*)allocator.allocate();
	*a3 = 3; std::cout << "a3 pointer value:" << *a3 << std::endl;  
	allocator.deallocate(a1);   
	allocator.deallocate(a3);

	a4 = (int*)allocator.allocate();
	*a4 = 4; std::cout << "a4 pointer value:" << *a4 << std::endl; 
	a5 = (int*)allocator.allocate();
	*a5 = 5; 
	std::cout << "a5 pointer value:" << *a5 << std::endl;
	std::cout << "a1 pointer value:" << *a1 << std::endl; 
	std::cout << "a2 pointer value:" << *a2 << std::endl; 
	std::cout << "a3 pointer value:" << *a3 << std::endl;

	allocator.deallocate(a2); 
	allocator.deallocate(a4); 
	allocator.deallocate(a5);
}







int main(int argc, char** argv) {
	TestAllocationBlock();
	TList<Figure> list;
	char cmd[3];
	do {
		cout << " ' + ' - Add item " << endl;
		cout << " ' - ' - Delete item " << endl;
		cout << " ' q ' - Exit " << endl;
		cout << "Enter command" << endl;
		cout << "Enter kind of figure:" << endl;
		cout << "r - Romb" << endl;
		cout << "t - Trapeze" << endl;
		cout << "p - Pentagon" << endl;
		cin >> cmd;


		if (cmd[0] == '+') {
			if (cmd[1] == 'p') {
				Pentagon a;
				cout << "Enter side" << endl;
				cin >> a;
				cout << "Enter position" << endl;
				int b;
				cin >> b;
				list.add(shared_ptr<Figure>(new Pentagon(a)), b);
				for (auto i : list) {
					std::cout << *i << std::endl;
				}
			}
			if (cmd[1] == 'r') {
				Romb a;
				cout << "Enter first and second diags" << endl;
				cin >> a;
				cout << "Enter position" << endl;
				int b;
				cin >> b;
				list.add(shared_ptr<Figure>(new Romb(a)), b);
				for (auto i : list) {
					std::cout << *i << std::endl;
				}
			}
			if (cmd[1] == 't') {
				Trapeze a;
				cout << "Enter 2 sides and high" << endl;
				cin >> a;
				cout << "Enter position" << endl;
				int b;
				cin >> b;
				list.add(shared_ptr<Figure>(new Trapeze(a)), b);

				for (auto i : list) {
					std::cout << *i << std::endl;
				}

			}



		}
		if (cmd[0] == '-') {
			cout << "Enter position" << endl;
			int b;
			cin >> b;
			if (list.empty() == true) {
				cout << "List is empty" << endl;
			} else {
				list.dell(b);
				for (auto i : list) {
					std::cout << *i << std::endl;
				}
			}

		}

	} while (cmd[0] != 'q');

	return 0;
}