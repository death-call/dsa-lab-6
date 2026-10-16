#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 20;

char stack[MAX];
int top = -1;

void push(char ch)
{
    if (top < MAX - 1)
    {
        stack[++top] = ch;
    }
}

char pop()
{
    if (top >= 0)
    {
        return stack[top--];
    }
    return '\0';
}

int task3()
{
    char word[MAX + 1];

    cout << "Enter a word (max 20 characters): ";
    cin >> word;

    int length = strlen(word);

    if (length > MAX)
    {
        cout << "Word is too long!";
        return 0;
    }

    for (int i = 0; i < length; i++)
    {
        push(word[i]);
    }

    cout << "Reversed word: ";

    while (top >= 0)
    {
        cout << pop();
    }

    cout << endl;

    return 0;
}