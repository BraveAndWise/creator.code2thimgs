#include <iostream>
#include "Stack.h"
#include "../CLike.h"

Status InitStack(LinkStack &S)
{
    S = NULL;
    return OK;
}

Status StackEmpty(LinkStack S)
{
    if (S == NULL)
        return TRUE;
    else
        return FALSE;
}

SElemType GetTop(LinkStack S)
{
    if (S != NULL)
    {
        return S->data;
    }
    return 0;
}

int StackLength(LinkStack S)
{
    printf("当前方法尚未实现"); //TODO
    return OK;
}

Status ClearStack(LinkStack S)
{
    printf("当前方法尚未实现"); //TODO
    return OK;
}

Status DestroyStack(LinkStack &S)
{
    printf("当前方法尚未实现"); //TODO
    return OK;
}

Status Push(LinkStack &S, SElemType e)
{
    LinkStack p = new StackNode;
    p->data = e;
    p->next = S;
    S = p; //修改栈顶指针
    return OK;
}

Status Pop(LinkStack &S, SElemType &e)
{
    if (S == NULL)
        return ERROR;
    e = S->data;
    LinkStack p = S;
    S = S->next;
    delete p;
    return OK;
}

void PrintStack(LinkStack S)
{
    cout << "| ";
    LinkStack p = S->next;
    while (p)
    {
        printf("%c | ", p->data);
        p = p->next;
    }
    cout << endl;
}
