#pragma once
#include <iostream>
#include "D:\Prorgramming_device\programing\ProblemSolvingLevel5\Project_Double_Linked_Class\Project_Double_Linked_Class\clsDblLinkedLinst.h"

using namespace std;

template <class T>
class clsMyQueue
{
protected:
	clsDblLinkedList <T> _MyList;

public:

	void push(T Item)
	{
		_MyList.InsertAtEnd(Item);
	}
	void pop()
	{
		_MyList.DeleteFirstNode();
	}
	void Print() 
	{
		_MyList.PrintList();
	}
	T Size()
	{
		return _MyList.Size();
	}
	T front()
	{
		return _MyList.GetItem(0);
	}
	T back()
	{
		return _MyList.GetItem(Size() - 1);
	}
	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}
	T GetItem(T Item)
	{
		return _MyList.GetItem(Item);
	}
	void Reverse()
	{
		_MyList.Reverse();
	}
	void UpdateItem(T index, T Item)
	{
		_MyList.UpdateItem(index, Item);
	}
	void InsertAfter(T index, T Item)
	{
		_MyList.InsertAfter(index, Item);
	}
	void InsertAtFront(T value)
	{
		_MyList.InsertAtBeginning(value);
	}
	void InsertAtBack(T value)
	{
		_MyList.InsertAtEnd(value);
	}
	void Clear()
	{
		_MyList.Clear();
	}
};