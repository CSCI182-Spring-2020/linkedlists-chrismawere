#pragma once
#include<iostream>
#include"Node.h"

class SimpleList
{
private:
	Node* head, * tail;

public:
	
	
	SimpleList();
	virtual ~SimpleList() {};

	Node* start = NULL;
	void QueueItem(int);
	void  DeQueueItem();
	bool isEmpty();
	void Push(int);
	void Pop();
	void DisplayList();

};

