#ifndef TSTACKITEM_H
#define TSTACKITEM_H 


class TStackItem { 
public:    
	TStackItem(void* t);   
	TStackItem(const TStackItem& orig);   
	   
	TStackItem* SetNext(TStackItem* next); 
	TStackItem* GetNext();   
	void* GetValue() const; 

	virtual ~TStackItem();
private: 
	void* t; 
	TStackItem *next; 
};

#endif /* TSTACKITEM_H */ 