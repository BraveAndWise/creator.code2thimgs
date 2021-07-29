#include <iostream>
#include "Stack.h"
#include "../CLike.h"

Status InitStack(SqStack &S)
{
    S.base = new SElemType[MAXSIZE];
    if (!S.base)
        exit(OVERFLOW);
    S.top = S.base;
    S.stacksize = MAXSIZE;
    return OK;
}

Status StackEmpty(SqStack S)
{
    if (S.base == S.top)
        return TRUE;
    else
        return FALSE;
}

int StackLength(SqStack S)
{
    return S.top - S.base;
}

Status ClearStack(SqStack S)
{
    if (S.base)
        S.top = S.base;
    return OK;
}

Status DestroyStack(SqStack &S)
{
    if (S.base)
    {
        delete S.base;
        S.stacksize = 0;
        S.base = S.top = NULL;
    }
    return OK;
}

Status Push(SqStack &S, SElemType e)
{
    if (S.top - S.base == S.stacksize)
        return ERROR;
    *S.top++ = e;
    return OK;
}

Status Pop(SqStack &S, SElemType &e)
{
    if (S.top == S.base)
        return ERROR;
    e = *--S.top;
    return OK;
}

void PrintStack(SqStack S)
{
    cout << "| ";
    SElemType *p = S.base;
    int count = 0;
    while (p < S.top)
    {
        printf("%c | ", *p++);
    }
    cout << endl;
}
