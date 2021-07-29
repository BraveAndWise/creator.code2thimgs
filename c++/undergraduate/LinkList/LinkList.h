#ifndef LinkList_H
#define LinkList_H

#include "../CLike.h"

typedef struct LNode
{
    ElemType data;
    LNode *next;
} * LinkList;

typedef struct DuLNode
{
    ElemType data;
    DuLNode *prior;
    DuLNode *next;
} * DuLinkList;

//初始化
Status InitList(LinkList &L);
//删除
Status DestroyList(LinkList &L);
//清空
Status ClearList(LinkList &L);

//位置 i 插入新结点
Status InsertElem(LinkList &L, int i, ElemType e);
//位置 i 删除结点
Status RemoveElem(LinkList &L, int i);

//判断是否为空
Status IsEmpty(LinkList L);
//计算顺序表长度
int ListLength(LinkList L);
//定位元素位置序号
int LocateElem(LinkList L, ElemType e);
//获取指定位置的元素
Status GetElem(LinkList L, int i, ElemType &e);

//初始化
Status InitList(DuLinkList &L);
//删除
Status DestroyList(DuLinkList &L);
//清空
Status ClearList(DuLinkList &L);

//位置 i 插入新结点
Status InsertElem(DuLinkList &L, int i, ElemType e);
//位置 i 删除结点
Status RemoveElem(DuLinkList &L, int i, ElemType &e);

//判断是否为空
Status IsEmpty(DuLinkList L);
//计算顺序表长度
int ListLength(DuLinkList L);
//定位元素位置序号
int LocateElem(DuLinkList L, ElemType e);
//获取指定位置的元素
Status GetElem(DuLinkList L, int i, ElemType &e);
void PrintList(LinkList L);
void PrintList(DuLinkList L);

#endif