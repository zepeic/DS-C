
#include <iostream>
#include <stdlib.h>

struct Stack {
    int top; 
    int size;
    int* S;
};

void create(struct Stack *st) {
    printf("Enter the size: ");
    scanf_s("%d", &st->size);
    st->top = -1;
    st->S = (int*)malloc(st->size * sizeof(int));


}

void Display(struct Stack st) {
    int i = 0;
    for (i = st.top; i >= 0; i--) {
        printf("%d ", st.S[i]);
        

    }
    std::cout << std::endl;
}

void push(struct Stack *st,int x){
    if (st->top == st->size - 1) 
        std::cout << "Stack Overflow" << std::endl;
  
    else {
        st->top++;
        st->S[st->top] = x;
    }
}


int pop(struct Stack* st) {
    int x = -1;
    if (st->top == -1)
        std::cout << "Stack Underflow" << std::endl;
    else {
        x = st->S[st->top--];
    }
    return x;
}

int isFull(struct Stack st) {
    if (st.top == st.size - 1)
        return 1;
    return 0;
}
int isEmpty(struct Stack st) {
    if (st.top == -1)
        return 1; 
    return 0;
}


int peek(struct Stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
        printf("Invalid Index \n");
    x = st.S[st.top - index + 1];

    return x;
}
int main()
{
    struct Stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);

    Display(st);

    pop(&st);
    Display(st);
}