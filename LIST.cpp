#include "List.h"

using namespace std;

template <class T> TList<T>::TList() : head(nullptr) {
}
template <class T> ostream& operator<<(ostream& os, const TList<T>& list) {
	shared_ptr<TListItem<T>> item = list.head;

	while (item != nullptr)
	{
		cout << *item->GetValue();
		item = item->GetNext();
	}

	return os;
}
template <class T> void TList<T>::add(shared_ptr<T>  && item, int num) {
	num--;
	shared_ptr<TListItem<T>>  newIt(new TListItem<T>(item));
	if (head == nullptr)
	{

		newIt->SetNext(head);
		head = newIt;
	}
	else
	{
		shared_ptr<TListItem<T>> curr = head;
		for (int i = 1; (i<num) && (curr->GetNext() != nullptr); i++)
		{
			curr = curr->GetNext();

		}

		if (num == 0)
		{

			newIt->SetNext(head);
			head = newIt;
		} else {

			if (curr->GetNext() != nullptr) {

				newIt->SetNext(curr->GetNext());
				curr->SetNext(newIt);
			} else {

				curr->SetNext(newIt);

			}

		}
	}

}


template <class T> bool TList<T>::empty() {
	return head == nullptr;
}


template <class T> TIterator<TListItem<T>, T> TList<T>::begin() {
	return TIterator<TListItem<T>, T>(head);
}

template <class T> TIterator<TListItem<T>, T> TList<T>::end() {
	return TIterator<TListItem<T>, T>(nullptr);
}

template <class T> void TList<T>::dell(int num) {
	shared_ptr<TListItem<T>> curr = head;
	shared_ptr<TListItem<T>> ptr;


	for (int i = 1; (i<num) && (curr->GetNext() != nullptr); i++)
	{
		curr = curr->GetNext();

	}
	if (curr != nullptr)
	{

		if (curr == head)
		{
			head = head->GetNext();


			curr = head;
		}
		else
		{

			ptr = head;

			while (ptr->GetNext() != curr)
			{

				ptr = ptr->GetNext();
			}
			ptr->SetNext(curr->GetNext());

			curr = ptr;

		}
	}

}

template <class T> TList<T>::~TList() {

	//	delete head;

}

#include "Figure.h"
template class TList<Figure>;
template ostream& operator<<(ostream& os, const TList<Figure>& list);