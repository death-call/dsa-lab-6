#include <iostream>
using namespace std;

#define size 5
int item[size];
int front = -1;
int rear = -1;

void enqueue(int value)
{

	if (rear == size - 1)
	{
		cout << "Queue is full";
	}
	if (front == -1)
		front++;
	rear++;
	item[rear] = value;
	return;
}

void display()
{
	if (front == -1)
		cout << "Queue is empty" << endl;
	else
	{
		for (int i = front; i <= rear; i++)
		{
			cout << item[i] << " ";
		}
	}
}

void dequeue()
{
	if (front == -1 || front > rear)
	{
		cout << "Queue is empty" << endl;
		return;
	}
	if (front > rear)
	{
		front = -1;
		rear = -1;
	}
	front++;
}
void PeekFront()
{
	if (front == -1)
	{
		cout << "Queue is empty" << endl;
		return;
	}
	else {
		cout << item[front] << endl;
	}
}

void task4_and_5()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);

	display();

	enqueue(40);
	enqueue(50);
	//insert after full
	enqueue(60);
}