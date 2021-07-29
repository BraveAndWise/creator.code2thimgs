#ifndef SQLIST_H
#define SQLIST_H

#include "../CLike.h"

#define MAXSIZE 100

typedef struct
{
    ElemType *elem;
    int length;
} SqList;

//初始化
Status InitList(SqList &L);
//删除
Status DestroyList(SqList &L);
//清空
Status ClearList(SqList &L);

//判断是否为空
Status IsEmpty(SqList L);
//计算顺序表长度
Status ListLength(SqList L);

//定位元素位置序号
int LocateElem(SqList L, ElemType e);
//获取指定位置的元素
Status GetElem(SqList L, int i, ElemType &e);
void PrintList(SqList L);

Status InsertElem(SqList &L, int i, ElemType e);
int RemoveElem(SqList &L, int i);

#endif