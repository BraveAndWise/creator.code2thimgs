#include "Queue.h"
#include "../CLike.h"

Status InitQueue(LinkQueue &Q)
{
    Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
    if (!Q.front)
        exit(OVERFLOW);
    Q.front->next = NULL;
    Q.front->data = '-';
    return OK;
}

Status DestroyQueue(LinkQueue &Q)
{
    while (Q.front)
    {
        Q.rear = Q.front->next;
        free(Q.front);
        Q.front = Q.rear;
    }
    return OK;
}

Status QueueEmpty(LinkQueue Q)
{
    if (Q.front == Q.rear)
        return TRUE;
    else
        return FALSE;
}

Status GetHead(LinkQueue Q, QElemType &e)
{
    if (Q.front == Q.rear)
        return ERROR;
    {
        e = Q.front->next->data;
    }
    return OK;
}

int QueueLength(LinkQueue Q)
{
    int i = 0;
    QueuePtr p = Q.front;
    while (p)
    {
        p = p->next;
        i++;
    }
    return i;
}

Status ClearQueue(LinkQueue Q)
{
    printf("当前方法尚未实现"); //TODO
    return OK;
}

Status EnQueue(LinkQueue &Q, QElemType e)
{
    if ((Q.rear - Q.front + MAXQSIZE) % MAXQSIZE == MAXQSIZE)
    {
        cout << "插入链式队列失败" << endl;
        return ERROR;
    }
    QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
    if (!p)
        return ERROR;
    p->data = e;
    p->next = NULL;
    Q.rear->next = p;
    Q.rear = p;
    return OK;
}

Status DeQueue(LinkQueue &Q, QElemType &e)
{
    if (Q.front == Q.rear)
        return ERROR;
    QueuePtr p = Q.front->next;
    e = p->data;
    Q.front->next = p->next;
    if (Q.rear == p)
        Q.rear == Q.front;
    delete p;
    return OK;
}

void PrintQueue(LinkQueue Q)
{
    if (Q.front->next)
    {
        QueuePtr p = Q.front->next;
        while (p)
        {
            cout << "| " << p->data << " | ";
            p = p->next;
        }
        cout << endl;
    }
    else
        cout << "队列为空" << endl;
}
