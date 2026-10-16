#include <iostream>
using namespace std;

//Explanation for the limitation. When we deque we simply move the front one place ahead or ignore the element.
//This does not utilize the proper space and reduces the size of array utilized.
const int SIZE = 5;

int items[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        cout << "Queue is full! Cannot add customer.\n";
        return;
    }

    if (front == -1)
    {
        front = 0;
    }

    rear++;
    items[rear] = value;

    cout << "Customer " << value << " added successfully.\n";
}

void dequeue()
{
    if (front == -1)
    {
        cout << "Queue is empty! No customer to serve.\n";
        return;
    }

    cout << "Serving customer token: " << items[front] << endl;

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
}

void peekFront()
{
    if (front == -1)
    {
        cout << "Queue is empty! No next customer.\n";
        return;
    }

    cout << "Next customer token: " << items[front] << endl;
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is empty!\n";
        return;
    }

    cout << "Customers in queue: ";

    for (int i = front; i <= rear; i++)
    {
        cout << items[i] << " ";
    }

    cout << endl;
}

int task6()
{
    int choice;
    int token;

    do
    {
        cout << "\n--- Customer Service Queue ---\n";
        cout << "1. Add customer\n";
        cout << "2. Serve next\n";
        cout << "3. View next\n";
        cout << "4. Display queue\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter customer token number: ";
            cin >> token;
            enqueue(token);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            peekFront();
            break;

        case 4:
            display();
            break;

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}