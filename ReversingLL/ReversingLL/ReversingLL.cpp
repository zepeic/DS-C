

#include <iostream>

struct Node {
    int data;
    struct Node* next;

}*first = NULL;

void create(int A[], int n) {
    struct Node* t, * last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t; 
    }
}

void Display(struct Node* p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next; 
    }
}

int count(struct Node* p) {
    int x = 0;
    while (p != NULL) {
        x++;
        p = p->next;
    }
    return x;
}

void Reverse1(struct Node* p ) {
    int* A,i = 0;
    
    struct Node* q = p;

    A = (int*)malloc(sizeof(int));
    while (q != NULL) {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != NULL) {
        q->data = A[i];
        
        q = q->next;
        i--;
    }
   

    



}
int main()
{
    int A[] = { 10, 20 ,30 ,40 ,50 };
    create(A, 5);
    Display(first);
    Reverse1(first);
    Display(first);
}

