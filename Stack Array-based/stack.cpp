#include "stack.h"
#include <iostream>
using namespace std;

template <typename T>
void CreateStack(Stack<T> *ps){        // O(1)
    ps->top = 0;
}

/*pre-conditions: stack must be intialized and stack isn't full */
template <typename T>
bool Push(T e,Stack<T> *ps){        // O(1)
    if (ps->top == MAXSTACK) return false;
    ps->entry[ps->top++] = e;
    return true;
}

template <typename T>
bool StackFull(Stack<T> *ps){       // O(1)
    return ps->top >= MAXSTACK;
}

template <typename T>
bool StackEmpty(Stack<T> *ps){      // O(1)
    return ps->top <= 0;
}

template <typename T>
/*pre-conditions: stack must be intialized and stack isn't empty */
bool Pop(T *pe,Stack<T> *ps){       // O(1)
    if(ps->top == 0) return false;
    *pe = ps->entry[--ps->top];
}

template <typename T>
/*pre-conditions: stack must be intialized and stack isn't empty */
void StackTop(T *pe,Stack<T> *ps){      // O(1)
    *pe = ps->entry[ps->top - 1];
}

template <typename T>
void ClearStack(Stack<T> *ps){      // O(1)
    ps->top = 0;
}

template <typename T>
void TraverseStack(Stack<T> *ps,void (*pf) (T)){    // O(n)
    for(int i=ps->top-1;i>=0;--i)
        (*pf)(ps->entry[i]);   
}