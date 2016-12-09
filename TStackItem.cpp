#include "TStackItem.h" 
#include <iostream> 
 
TStackItem::TStackItem(void* t) {
	this->t = t;  
	this->next = nullptr; 
} 
 
TStackItem::TStackItem(const TStackItem& orig) {
	this->t = orig.t;   
	this->next = orig.next;  
	std::cout << "Stack item: copied" << std::endl;
} 
 
TStackItem* TStackItem::SetNext(TStackItem* next) {  
	TStackItem* old = this->next;    
	this->next = next;  
	return old;
} 
 
void* TStackItem::GetValue() const{  
	return this->t; 
} 
 
TStackItem* TStackItem::GetNext() {  
	return this->next; 
} 
 
TStackItem::~TStackItem() { 
	//std::cout << "Stack item: deleted" << std::endl; 
	delete next; 
} 