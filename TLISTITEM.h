#pragma once
#include <cstdlib>
#include <iostream>
#include <memory>
#include "Figure.h"
#include "TAllocationBlock.h"

using namespace std;
template<class T> class TListItem {
public:
	TListItem(const shared_ptr<T>& figure);

	template<class A> friend ostream& operator<<(ostream& os, const TListItem<A>& obj);

	shared_ptr<TListItem<T>> SetNext(shared_ptr<TListItem> &next);
	shared_ptr<TListItem<T>> GetNext();
	shared_ptr<T> GetValue() const;

	virtual ~TListItem();
private:
	shared_ptr<T> figure;
	shared_ptr<TListItem<T>> next;
	 static TAllocationBlock stackitem_allocator; 
};
