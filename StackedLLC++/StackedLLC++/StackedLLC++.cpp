// StackedLLC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Node {
public:
    Node* next;
    int data;
};

class Stack {
private :
    Node* top;
public:
    Stack();
    void push(int x);
    int pop();
    void Display();

};

Stack::Stack() {
    top = nullptr;
}
void Stack::push(int x) {
     Node* t = new Node;
     if (t == nullptr)
         cout << "Stack is Full";
     else {
         t->data = x;
         t->next = top;
         top = t;

     }

}

int Stack::pop() {
    int x = -1;
    Node* t = new Node;
    if (t == nullptr)
        cout << "Stack is Empty";
    else {
        t = top;
        x = top->data;
        top = top->next;
        delete(t);
    }
    return x; 

}

void Stack::Display() {
    Node* p = top;
    while (p != nullptr) {
        cout << p;
        p = p->next;
    }
    cout << endl;
 }

int main()
{
    Stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    cout << stk.pop();
}
