#pragma once

#include "Figure.h"
#include "TListItem.h"
#include "TIterator.h"
#include <memory>

using namespace std;
template <class T> class TList
{
public:
	TList();
	void add(shared_ptr<T>  &&kvad, int num);
	void dell(int num);
	TIterator<TListItem<T>, T> begin();
	TIterator<TListItem<T>, T> end();

	template <class A> friend ostream& operator<<(ostream& os, const TList<A>& list);
	bool empty();

	virtual ~TList();
private:
	shared_ptr<TListItem<T>> head;

};
