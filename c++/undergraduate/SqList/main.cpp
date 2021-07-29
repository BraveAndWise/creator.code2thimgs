#include "Sqlist.cpp"

int main(int argc, char const *argv[])
{
    cout << "测试线性表 >" << endl;
    SqList L;
    ElemType result;
    cout << "初始化(InitList) > 插入(InsertElem) > 删除(RemoveElem) >" << endl
         << "\n   > ";
    InitList(L);
    for (int i = 65; i < 72; i++)
        InsertElem(L, ListLength(L) + 1, i);
    PrintList(L);
    RemoveElem(L, 3);
    cout << "   > ";
    PrintList(L);

    cout << "\n获取指定位置的元素(GetElem) > 获取元素位置(LocateElem) > 判断是否为空(IsEmpty)" << endl
         << "\n   > ";
    GetElem(L, ListLength(L) - 1, result);
    cout << "第 " << ListLength(L) - 1 << " 个位置的元素为" << result << endl;
    cout << "   > E 在第 " << LocateElem(L, 'E') << " 个结点" << endl;
    cout << "   > " << (IsEmpty(L) ? "为空" : "不为空") << endl;

    cout << "\n销毁列表(DestroyList) > 判断为空(IsEmpty) > 列表长度(ListLength)" << endl
         << "\n   > ";
    DestroyList(L);
    cout << (IsEmpty(L) ? "为空" : "不为空");
    cout << ", " << ListLength(L) << endl;
    return 0;
}
