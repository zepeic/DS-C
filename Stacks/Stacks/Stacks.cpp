


#include <iostream>
#include <stdlib.h>
struct Stack {
    int size;
    int top;
    int* S;
};

void create(struct Stack* st)
{
    printf("Enter Size ");    
    scanf_s("%d", &st->size);
    st->top = -1;
    st->S = (int*)malloc(st->size*sizeof(int));
}

void Display(struct Stack st) {
    int i;
    for (i = st.top; i >= 0; i--)
        printf("%d ", st.S[i]);
    std::cout << "\n";
}

void push(struct Stack* st, int x) {
    if (st->top == st->size - 1) {
        std::cout << "Stack Overflow" << "\n";
    }
    else {
        st->top++;
        st->S[st->top] = x;
    }
}

int peek(struct Stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
        printf("Invalid Index \n");
    x = st.S[st.top - index + 1];

    return x;
}

int isEmpty(struct Stack st) {
    if (st.top == 1) 
        return 1;
    return 0;
}

int isFull(struct Stack st) {
    return st.top == st.size - 1;
}

int stackStop(struct )

int pop(struct Stack* st) {
    int x = -1;
    if (st->top == -1) 
        std::cout << "Stack Underflow";
    
    else {
        x = st->S[st->top--];
    }
    return x; 
}
int main()
{
    struct Stack st;
    create(&st);
    
    push(&st, 10);
    push(&st, 20);
    push(&st, 10);
    push(&st, 10);
    
    Display(st);
    
    printf("%d \n", pop(&st));
    
    
    Display(st);

}
    

