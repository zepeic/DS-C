// FindingMax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Node {
    int data;
    struct Node *next;

}*first=NULL;

void create(int A[], int n) {
    int i = 0;
    struct Node* t, * last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

}

int Max(struct Node* p) {
    int max = INT32_MIN;

    while (p != NULL) {
        if (max < p->data) {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int count(struct Node* p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;

    }
    return l;
}

void Display(struct Node* p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void RDisplay(struct Node* p)
{
    if (p != NULL)
    {
        RDisplay(p->next);
        printf("%d ", p->data);

    }
}

int sum(struct Node* p) {
    int x = 0;
    int count = 0;
    while (p != NULL) {
        x = x + (p->data);
        p = p->next;
    }
    return x;
}
int main()
{
    struct Node* temp;
    int A[] = { 3,5,7,10,15 };
    create(A, 5);

    Display(first);

    printf("Length is %d", count(first));
    printf("Sum is %d", sum(first));
    printf("The max is %d", Max(first));
    return 0;
}   