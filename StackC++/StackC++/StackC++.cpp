
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

};

class Stack {
private:
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
        cout << "Stack Overflow" << endl;

    else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

void Stack::Display() {
    if (top == nullptr) 
        cout << "Stack is Empty";
    
    while (top != nullptr) {
        cout << top->data << " "; 
        top = top->next;
    }

}
int Stack::pop() {
    Node* t = new Node;
    int x = -1;
    if (t == nullptr)
        cout << "Stack is Empty" << endl;
    else {
        t = top;
        x = top->data;
        top = top->next;
        delete(t);
    }
    return x;
}


int main()
{
    std::cout << "Hello World!\n";
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.Display();
}

