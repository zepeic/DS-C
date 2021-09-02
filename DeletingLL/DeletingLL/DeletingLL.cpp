

#include <iostream>

struct Node {
    int data;
    struct Node* next;

}*first = NULL;

Node* search(Node* p, int n) {
    int count;

    while (p != NULL) {
        if (p->data == n) {
            return(p);
        }
        return NULL;
    }
}

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

void SortedInsert(struct Node* p, int x) {
    struct Node* t, * q = NULL;

    t = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if (first == NULL)
        first = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first) {
            t->next = first;
            first = t;
        }
        else
            t->next = q->next;
        q->next = t;
    }
}


    void Insert(struct Node* p, int index, int x) {
        struct Node* t;
        int i;
        if (index < 0 || index > count(p))
            return;
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = x;

        if (index == 0) {
            t->next = first;
            first = t;
        }
        else
        {
            for (i = 0; i < index - 1; i++)
                p = p->next;
            t->next = p->next;
            p->next = t;

        }
    }


    int Delete(struct Node* p, int index) {
        struct Node* q = NULL;

        int x = -1, i;

        if (index < 1 || index > count(p))
            return -1;
        if (index == 1) {
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










    int main() {

        int A[] = { 10,20,30,40,50 };

        return 0;
    }
