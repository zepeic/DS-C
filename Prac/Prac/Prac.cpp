
#include <iostream>

struct Node {
    int data;
    struct Node* next;
}*first = NULL;
void create(int A[], int n) {
    int i;
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

int Delete(struct Node* p, int index) {
    struct Node* q = NULL;
    int x = -1, i;
    if (index < 0 || index > count(p))
        return -1;
    if (index == 0) {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else 
    for (i = 0; i < index - 1; i++) {
        q = p;
        p = p->next;
    }
        q->next = p->next;
        x = p->data;
        free(p);
               return x;
    
    }

bool isSorted(struct Node* p) {
    int i;
    for (i = 0; i < count(p); i++) {
        if (p->data > (p->next->data)) {
            return false;

        }
        else {
            return true;
        }
    }

}

int main() 
{
    int A[] = {30, 10,20,30,40,50 };
    create(A, 5);
    Display(first);
    printf("The number of Elements is %d", count(first));
    printf("\nThe deleted element is %d\n", Delete(first, 2));
    Display(first);
    printf("\nIs the list sorted :  %d\n", isSorted(first));

}

