#include "TStack.h" 

TStack::TStack() : head(nullptr) { }

TStack::TStack(const TStack& orig) { 
	head = orig.head; 
}



void TStack::push(void* t) {
	TStackItem *other = new TStackItem(t);   
	other->SetNext(head);   
	head = other;

}

bool TStack::empty() { 
	return head == nullptr;
}

void* TStack::pop() {
	void* result;    
	if (head != nullptr) {
		TStackItem *old_head = head;    
		head = head->GetNext();       
		result = old_head->GetValue(); 
		old_head->SetNext(nullptr);     
		delete old_head;
	}

	return result;
}

TStack::~TStack() { 
	delete head;
}
