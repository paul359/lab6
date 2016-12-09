
#include "TListItem.h"
#include <iostream>

using namespace std;

template <class T> TListItem<T>::TListItem(const shared_ptr<T>& figure) {
	this->figure = figure;
	this->next = nullptr;
}


template <class T> shared_ptr<TListItem<T>> TListItem<T>::SetNext(shared_ptr<TListItem<T>> &next) {
	shared_ptr<TListItem<T>> old = this->next;
	this->next = next;
	return old;
}
template <class T> shared_ptr<T> TListItem<T>::GetValue() const {
	return this->figure;
}

template<class T>shared_ptr<TListItem<T>> TListItem<T>::GetNext() {
	return this->next;
}
template<class T>TListItem<T>::~TListItem() {
	// cout << "lst item: deleted" << endl;
	// delete next;
}
#include "Figure.h"
template class TListItem<Figure>;
template ostream& operator<<(ostream& os, const TListItem<Figure>& obj);