#include <iostream>
#include "stack.h"
#include "queue.h"

using namespace std;
int main()
{
	Stack stack;
	Queue queue;

	//"Insert" elements
	for (int i = 0; i < 10; ++i)
	{
		stack.insert(i);
		queue.insert(i);
	}
	// Print elements 
	cout << "Stack contents:" << endl;
	stack.print();
	cout << "Queue contents:" << endl;
	queue.print();

	//Remove elements
	stack.remove();
	queue.remove();

	//Print elements 2
	cout << "Stack contents after one removal:" << endl;
	stack.print();
	cout << "Queue contents after one removal:" << endl;
	queue.print();

	return 0;
}