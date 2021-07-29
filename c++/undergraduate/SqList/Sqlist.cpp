#include "Sqlist.h"

Status InitList(SqList &L)
{
    // L.elem = new ElemType[MAXSIZE];
    L.elem = (ElemType *)malloc(sizeof(ElemType) * MAXSIZE);

    if (!L.elem)
        return OVERFLOW;
    L.length = 0;
    return OK;
}
Status DestroyList(SqList &L)
{
    if (L.elem)
        delete L.elem;
    L.length = 0;
    return OK;
}
Status ClearList(SqList &L)
{
    L.length = 0;
    return OK;
}

Status IsEmpty(SqList L)
{
    if (L.length == 0)
        return TRUE;
    return FALSE;
}
Status ListLength(SqList L)
{
    return L.length;
}

int LocateElem(SqList L, ElemType e)
{
    int i = 1;
    while (i <= ListLength(L))
    {
        if (L.elem[i - 1] == e)
            return i;
        else
            i++;
    }
    return 0;
}
Status GetElem(SqList L, int i, ElemType &e)
{
    if (i < 1 || i > ListLength(L))
        return ERROR;
    e = L.elem[i - 1];
    return OK;
}

//插值
Status InsertElem(SqList &L, int i, ElemType e)
{
    int j = ListLength(L);
    if (i < 1 || i > j + 1)
        return ERROR;
    if (j == MAXSIZE)
        return OVERFLOW;
    while (j > i)
    {
        L.elem[j] = L.elem[j - 1];
        j++;
    }
    L.elem[i - 1] = e;
    L.length++;
    return OK;
}

//删值
int RemoveElem(SqList &L, int i, ElemType e)
{
    int j = i;
    if (i < 1 || i > ListLength(L))
        return ERROR;
    e = L.elem[i - 1];
    while (j < ListLength(L))
    {
        L.elem[j - 1] = L.elem[j];
        j++;
    }
    L.length--;
    return OK;
}

void PrintList(SqList L)
{
    for (int i = 0; i < ListLength(L); i++)
    {
        cout << L.elem[i] << " ";
    }
    cout << endl;
}