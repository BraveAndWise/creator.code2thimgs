#ifndef STACK_H
#define STACK_H

#include "../CLike.h"

#define MAXSIZE 100

typedef struct
{
    SElemType *base;
    SElemType *top;
    int stacksize;
} SqStack;

typedef struct StackNode
{
    SElemType data;
    StackNode *next;
} *LinkStack;


//构造一个空栈S
Status InitStack(SqStack &S);

//销毁栈
Status DestroyStack(SqStack &S);

//判断栈是否为空
Status StackEmpty(SqStack S);

//求顺序栈长度
int StackLength(SqStack S);

//清空顺序栈
Status ClearStack(SqStack S);

//入栈
Status Push(SqStack &S, SElemType e);

//出栈
Status Pop(SqStack &S, SElemType &e);
/////////////////////////////////////////////////////

//构造一个空栈S
Status InitStack(LinkStack &S);

//销毁栈
Status DestroyStack(LinkStack &S);

//判断栈是否为空
Status StackEmpty(LinkStack S);

//求顺序栈长度
int StackLength(LinkStack S);

//清空顺序栈
Status ClearStack(LinkStack S);

//入栈
Status Push(LinkStack &S, SElemType e);

//出栈
Status Pop(LinkStack &S, SElemType &e);

////////////////////////////////////////
//打印栈
void PrintStack(SqStack S);

//打印栈
void PrintStack(LinkStack S);


#endif