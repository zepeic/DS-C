
#include <iostream>

struct Node {
    int data;
    struct Node* next;
}*first = NULL,*second=NULL,*third= NULL;


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
void create2(int A[], int n) {
    int i;
    struct Node* t, * last;
    second = (struct Node*)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last = second;

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

void Concat(struct Node* p, struct Node* q) {
  
    third = p;
    while (p->next != NULL) 
        p = p->next;
        p->next = q;

        
    

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


void RemoveDuplicate(struct Node* p) {
    struct Node* q = p->next;

    while (q != NULL) {
        if (p->data != q->data) {
            p = q;
            q = q->next;
        }
        else {
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }


}

void Merge(struct Node* p, struct Node* q) {
    struct Node* last;
    if (p->data < q->data) {
        third = last = p;
        p = p->next;
        last->next = NULL;

    }
    else {
        third = last = q;
        q = q->next;
        last->next = NULL;
    }
    while (p != NULL && q != NULL) {
        if (p->data < q->data) {
            last->next = p;
            last = p; 
            p = p->next;
        }
        else {
            last->next = q;
            last = q;
            q = q->next;
        }

    }
    if (p != NULL) {
        last->next = p;
        last = p;
    }
    else {
        last->next = q;
        last = q;
    }
    }





int main()
{
    int A[] = { 10,20,30,40,50 };
    int B[] = { 5 , 15 ,25, 35, 45 };
    create(A, 5);
    create2(B, 5);

    Merge(first, second);
    Display(third);
}

