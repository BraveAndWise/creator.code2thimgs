#include <iostream>
#include "LinkList.cpp"

int main(int argc, char const *argv[])
{
    DuLinkList L2;
    InitList(L2);
    IsEmpty(L2);
    InsertElem(L2, 1, 'a');
    InsertElem(L2, 1, '5');
    InsertElem(L2, 3, '4');
    PrintList(L2);
    RemoveElem(L2, 2);
    PrintList(L2);
    InsertElem(L2, 1, 'a');
    InsertElem(L2, 1, '5');
    PrintList(L2);
    printf("ListLength: %d\n", ListLength(L2));
    ElemType e;
    int i = 3;
    GetElem(L2, i, e);
    printf("(%d)%c\n", i, e);
    printf("%c(%d)\n", 'a', LocateElem(L2, 'a'));
    return 0;
}
