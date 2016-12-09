#ifndef TSTACK_H #define TSTACK_H 

//#include "Triangle.h" 
#include "TStackItem.h" 

class TStack {
public:   
	TStack();  
	TStack(const TStack& orig); 
	void push(void* t);  
	bool empty();  
	void* pop();

	virtual ~TStack();
private:       
	TStackItem *head; 
};

#endif /* TSTACK_H */