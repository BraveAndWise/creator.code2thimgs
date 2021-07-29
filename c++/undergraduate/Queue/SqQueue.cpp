#include <iostream>
#include "Queue.h"
#include "../CLike.h"

Status InitQueue(SqQueue &Q)
{
    Q.base = new QElemType[MAXQSIZE];
    if (!Q.base)
        exit(OVERFLOW);
    Q.front = Q.rear = 0;
    return OK;
}

int QueueLength(SqQueue Q)
{
    return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
}

Status QueueEmpty(SqQueue Q)
{
    if (Q.front == Q.rear)
        return TRUE;
    else
        return FALSE;
}

Status ClearQueue(SqQueue Q)
{
    if (Q.front)
        Q.rear = Q.front;
    return OK;
}

Status DestroyQueue(SqQueue &Q)
{
    if (Q.base)
    {
        delete Q.base;
        Q.base = NULL;
        Q.front = Q.rear = 0;
    }
    return OK;
}

Status EnQueue(SqQueue &Q, QElemType e)
{
    if ((Q.rear + 1) % MAXQSIZE == Q.front)
        return ERROR;
    Q.base[Q.rear] = e;
    Q.rear = (Q.rear + 1) % MAXQSIZE;
    return OK;
}

Status DeQueue(SqQueue &Q, QElemType &e)
{
    if (Q.rear == Q.front)
        return ERROR;
    e = Q.base[Q.front];
    Q.front = (Q.front + 1) % MAXQSIZE;
    return OK;
}

QElemType GetHead(SqQueue Q)
{
    if (Q.front != Q.rear)
        return Q.base[Q.front];
    return 0;
}

void PrintQueue(SqQueue Q)
{
    cout << "| ";
    int i = Q.front;
    while ((Q.front) % MAXQSIZE < Q.rear)
    {
        printf("%c | ", Q.base[Q.front++]);
    }
    cout << endl;
}