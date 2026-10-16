#include <iostream>
using namespace std;

class Stack {
	struct node {
		int data;
		node* next;
	};
	node* top;
public:
	Stack()
	{
		top = nullptr;
	}
	void push(int value)
	{
		node* n = new node;
		n->data = value;
		n->next = nullptr;

		n->next = top;
		top = n;

	}
	int peek() {
		if (top == nullptr)
			cout << "Stack is empty" << endl;
		else
			return top->data;
	}
	void display()
	{
		node* curr = top;
		while (curr != nullptr)
		{
			cout << curr->data << " ";
			curr = curr->next;
		}
		cout << endl;
	}
	void pop()
	{
		if (top == nullptr)
			cout << "Stack is empty" << endl;
		else {
			node* temp = top;
			top = top->next;
			delete temp;
		}
	}

};

void task2()
{

	Stack s;
	s.push(5);
	s.push(15);
	s.push(25);
	s.display();
	s.pop();
	s.display();

}