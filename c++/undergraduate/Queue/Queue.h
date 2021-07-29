#ifndef QUEUE_H
#define QUEUE_H

#include "../CLike.h"

#define MAXQSIZE 10

typedef struct
{
    QElemType *base;
    int front; //头指针
    int rear; //尾指针
} SqQueue;

typedef struct QNode
{
    QElemType data;
    QNode *next;
} *QueuePtr;

typedef struct {
    QueuePtr front;
    QueuePtr rear;
} LinkQueue;

#endif