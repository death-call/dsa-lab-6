
#include <iostream>
using namespace std;

#define size 5
int items[size];
int top = -1;
void push(int value)
{
	if (top == size - 1)
		cout << "Stack is already full" << endl;
	else
	{
		top++;
		items[top] = value;
	}
}
void pop()
{
	if (top == -1)
		cout << "Stack is already empty" << endl;
	else
	{
		cout << "Removed element: " << items[top] << endl;
		top--;
	}
}
int peek()
{
	if (top == -1)
		cout << "Stack is empty" << endl;
	else
	{
		return items[top];
	}
	return 0;
}
void display()
{
	if (top == -1)
		cout << "Stack is empty" << endl;
	else
	{
		for (int i = top; i >= 0; i--)
			cout << items[i] << " ";
	}
}
void task1()
{
	push(10);
	push(20);
	push(30);
	display();
	cout << endl;
	pop();
	cout << "Peeked element:" << peek() << endl;

	//Test 6th insertion
	push(40);
	push(50);
	push(60);
	display();
	cout << endl;
	//Remove all stack element
	pop();
	pop();
	pop();
	pop();
	pop();
	//Pop after removing all elements
	pop();
}