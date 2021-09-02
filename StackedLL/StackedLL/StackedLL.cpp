
#include <iostream>
#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
}*top = NULL;

void push(int x)
{
    struct Node* t;
    t = (struct Node*)malloc(sizeof(struct Node));

    if (t == NULL)
        std::cout << "Stack is Full";
    else {
        t->data = x;
        t->next = top;
        top = t;
    }

}

int pop() {
    struct Node* t;
        int x = -1;
    if (top == NULL)
        std::cout << "Stack is Empty";

    else {
        t = top;
        top = top->next;
        x = t->data;
        free(t);

    }
    return x;

}

void Display() {
    struct Node* p;
    p = top;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    std::cout << std::endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    Display();
    pop();
    Display();
}

