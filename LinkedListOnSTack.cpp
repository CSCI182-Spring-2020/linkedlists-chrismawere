// LinkedListOnSTack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"Node.h"
#include "SimpleList.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Greetings, pick an option and do what you'd like to your list\n";
	cout << "Select :\n";
	cout << "1) Queue Item\n";
	cout << "2)Dequeue Item \n";
	cout << "3) Push Item\n";
	cout << "4) Pop Item\n";

	int option;
	cin >> option;

	SimpleList list;
	do {
		switch (option) {
		case 1:  list.QueueItem(201);
			break;
		case 2:  list.DeQueueItem();
			break;
		case 3: list.Push(21);
			break;
		case 4: list.Pop();
			break;
		}

		list.DisplayList();
	} while (option != 5);
		return 0;
	
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
