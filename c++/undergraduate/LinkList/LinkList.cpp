#include <iostream>
#include "LinkList.h"

Status InitList(LinkList &L)
{
    // L = (ElemType *)malloc(sizeof(ElemType) * MAXSIZE);
    L = new LNode;
    L->next = NULL;
    return OK;
}
Status DestroyList(LinkList &L)
{
    LinkList p = L;
    while (p)
    {
        L = L->next;
        delete p;
        p = L;
    }
    return OK;
}
Status ClearList(LinkList &L)
{
    LinkList p = L->next, q;
    while (p)
    {
        q = p->next;
        delete p;
        p = q;
    }
    L->next = NULL;
    return OK;
}

Status InsertElem(LinkList &L, int i, ElemType e)
{
    LinkList p = L;
    int j = 0;
    while (p && i > j + 1)
    {
        p = p->next;
        j++;
    }
    if (!p || i < j + 1)
    {
        printf("ERROR[%d %c]\n", i, e);
        return ERROR;
    }
    LinkList s = new LNode;
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}
Status RemoveElem(LinkList &L, int i, ElemType &e)
{
    LinkList p = L;
    int j = 0;
    while (p && i > j + 1)
    {
        p = p->next;
        j++;
    }
    if (!p || i < j + 1)
    {
        printf("ERROR[%d]\n", i);
        return ERROR;
    }
    LinkList q = p->next;
    e = q->data;
    p->next = q->next;
    delete q;
    return OK;
}

Status IsEmpty(LinkList L)
{
    if (ListLength(L))
        return 0;
    return TRUE;
}
int ListLength(LinkList L)
{
    LinkList p;
    p = L->next;
    int count = 0;
    while (p)
    {
        p = p->next;
        count++;
    }
    return count;
}
int LocateElem(LinkList L, ElemType e)
{
    int i = 0;
    LinkList p = L;
    while (p)
    {
        if (p->data == e)
            return i;
        p = p->next;
        i++;
    }
    return 0;
}
Status GetElem(LinkList L, int i, ElemType &e)
{
    LinkList p = L;
    int j = 0;
    while (p && i > j)
    {
        p = p->next;
        j++;
    }
    if (!p || i < j)
        return ERROR;
    e = p->data;
    return OK;
}
/////////////////////////////////////////////////////////////////////////////
Status InitList(DuLinkList &L)
{
    L = new DuLNode;
    L->prior = NULL;
    L->next = NULL;
    return OK;
}
Status DestroyList(DuLinkList &L)
{
    DuLinkList p;
    while (L)
    {
        p = L;
        L = L->next;
        delete p;
    }
    return OK;
}
Status ClearList(DuLinkList &L)
{
    DuLinkList p = L->next, q;
    while (p)
    {
        q = p->next;
        delete p;
        p = q;
    }
    L->prior = NULL;
    L->next = NULL;
    return OK;
}

Status InsertElem(DuLinkList &L, int i, ElemType e)
{
    DuLinkList p = L;
    int j = 0;
    while (p && i > j + 1)
    {
        p = p->next;
        j++;
    }
    if (!p || i < j + 1)
    {
        printf("ERROR[%d %c]\n", i, e);
        return ERROR;
    }
    DuLinkList s = new DuLNode;
    s->prior = p;
    s->data = e;
    s->next = p->next;

    if (p->next)
        p->next->prior = s;
    p->next = s;
    return OK;
}
Status RemoveElem(DuLinkList &L, int i, ElemType &e)
{
    DuLinkList p = L;
    int j = 0;
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    if (!p || j > i)
        return ERROR;
    e = p->data;
    p->prior->next = p->next;
    if (p->next)
        p->next->prior = p->prior;
    delete p;
    return OK;
}

Status IsEmpty(DuLinkList L)
{
    if (ListLength(L))
        return 0;
    return TRUE;
}

int ListLength(DuLinkList L)
{
    DuLinkList p = L->next;
    int count = 0;
    while (p)
    {
        p = p->next;
        count++;
    }
    return count;
}

int LocateElem(DuLinkList L, ElemType e)
{
    int i = 0;
    DuLinkList p = L;
    while (p)
    {
        if (p->data == e)
            return i;
        p = p->next;
        i++;
    }
    return i;
}

Status GetElem(DuLinkList L, int i, ElemType &e)
{
    DuLinkList p = L;
    int j = 0;
    while (p && i > j)
    {
        p = p->next;
        j++;
    }
    if (!p || i < j)
        return ERROR;
    e = p->data;
    return OK;
}

void PrintList(LinkList L)
{
    LinkList p = L->next;
    while (p)
    {
        printf("(%c)--->", p->data);
        p = p->next;
    }
    printf("\n");
}

void PrintList(DuLinkList L)
{
    DuLinkList p = L->next;
    while (p)
    {
        printf("(%c)<-->", p->data);
        p = p->next;
    }
    printf("\n");
}
