#include "SimpleList.h"
#include "Node.h"
#include<iostream>
using namespace std;

SimpleList::SimpleList()
{

}

//check if stack is empty
bool SimpleList::isEmpty()
{

	if (start == NULL)//if theres nothing at the top
		return true;
	else
		return false;

}

//Add to queue 
void SimpleList::QueueItem(int newValue)
{
	cout << "Enter your value" << endl;
	cin >> newValue;
	Node* temp = new Node;//creates pointer to new node
	temp->val = newValue;//add value to node
	temp->next = NULL;//points to next node

	if (head == NULL)//empty list
	{
		head = tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
	cout << "Queued Item" << endl;
	if (newValue == -1)
		exit(1);
}

void SimpleList::DeQueueItem()
{
	//is empty
	if (head == NULL)

		exit(1);
	Node* temp = head;
	head = temp->next;
	//set the new head to maintain the list
	//even if the next it is NULL(empty)
	if (head == NULL)
		tail = NULL;

	int nReturn = temp->val;
	delete temp;
	cout << nReturn << " has been dequeued" << endl;
}
//add to stack
void SimpleList::Push(int val)
{
	

	Node* ptr = new Node();  //add node
	ptr->val = val;  //insert value
	ptr->next = head; //point to next item on list
	head = ptr;  //top points at next item
}

//remove from stack
void SimpleList::Pop()
{
	if (head == NULL)

		exit (1);
	Node* temp = head;//set the new head to maintain the list
	head = head->next;//assign 2nd node to head
	
	
	temp->next = NULL;//destroy link from start
	

	int nReturn = temp->val;
	delete temp;//release the momory
	cout << nReturn << " has been popped" << endl;
}

void SimpleList::DisplayList()
{
	Node* traverse = head;
	while (traverse!=NULL)
	{
		cout << traverse->val << " ";
		traverse = traverse->next;
	}
}