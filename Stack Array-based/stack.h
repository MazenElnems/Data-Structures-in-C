/****Stack.h*******/

#ifndef STACK_H
#define STACK_H

#define MAXSTACK 100

template <typename T>
struct Stack{
    int top;
    T entry[MAXSTACK];
};

template <typename T>
bool Push(T, Stack<T> *);

template <typename T>
bool Pop(T *, Stack<T> *);

template <typename T>
int StackEmpty (Stack<T> *);

template <typename T>
bool StackFull (Stack<T> *);

template <typename T>
void CreateStack(Stack<T> *);

template <typename T>
void StackTop (T *, Stack<T> *);

template <typename T>
void ClearStack(Stack<T> *);

template <typename T>
void TraverseStack(Stack<T> *, void (*)(T));

#endif // STACK_H