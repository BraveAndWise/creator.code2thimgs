#include "CLike.h"
// #include "Complex/Complex.h"
// #include "SqList/SqList.h"
// #include "LinkList/LinkList.h"
// #include "Stack/Stack.h"
#include "Complex/Complex.cpp"
#include "SqList/SqList.cpp"
#include "LinkList/LinkList.cpp"
#include "Stack/SqStack.cpp"
#include "Stack/LinkStack.cpp"
#include "Queue/SqQueue.cpp"
#include "Queue/LinkQueue.cpp"

int TestComplex()
{
     Complex A, B;
     Create(A, 8, 4);
     Create(B, 4, 0);

     cout << "A = ";
     Print(A);
     cout << endl;
     cout << "B = ";
     Print(B);
     cout << endl;
     cout << endl;
     cout << "A + B = ";
     Print(Add(A, B));
     cout << endl;
     cout << "A - B = ";
     Print(Sub(A, B));
     cout << endl;

     return 0;
}

int TestLinkList()
{
     cout << "测试单链表 >" << endl;
     LinkList L;
     ElemType result;
     ElemType cooe1 = 'a';
     int cooe2 = 10;
     cout << "[InitList]   初始化列表" << endl;
     InitList(L);
     cout << endl;
     cout << "[IsEmpty]    单链表" << (IsEmpty(L) ? "为空" : "不为空") << endl;
     cout << "[InsertElem] 插入从字母 " << cooe1 << " 开始往后的 " << cooe2 << " 个字母" << endl;
     cout << "   > ";
     for (int i = 'a'; i < 'a' + cooe2; i++)
          InsertElem(L, ListLength(L) + 1, i);
     PrintList(L);
     cout << "[RemoveElem] 删除第 " << ListLength(L) - 5 << " 个位置的元素 ";
     RemoveElem(L, ListLength(L) - 5, result);
     cout << result << endl;
     cout << "   > ";
     PrintList(L);
     cout << endl;

     int pos = ListLength(L) / 2;
     cout << "[IsEmpty]    单链表" << (IsEmpty(L) ? "为空" : "不为空") << endl;
     GetElem(L, pos, result);
     cout << "[GetElem]    " << (result == 'a' + (pos - 1) ? "[验证正确]" : "[验证错误] ") << "第 " << pos << " 个位置的元素为" << result << endl;
     cout << "[LocateElem] " << ((LocateElem(L, 'f') == 'f' - 'a') ? "[验证正确]" : "[验证错误] ") << "f 在第 " << LocateElem(L, 'f') << " 个结点" << endl
          << endl;

     cout << "[DestroyList]销毁列表" << endl;
     DestroyList(L);
     cout << endl;
     return 0;
}

int TestSqList()
{
     cout << "测试线性表 >" << endl;
     DuLinkList L;
     ElemType result;
     ElemType cooe1 = 'a';
     int cooe2 = 10;
     // cout << "基本功能：初始化(InitList) > 获取表长(ListLength)" << endl
     //      << "基本功能：获取指定位置的元素(GetElem) > 获取元素位置(LocateElem) > 判断是否为空(IsEmpty)" << endl;
     cout << "[InitList]   初始化列表" << endl;
     InitList(L);
     cout << endl;
     cout << "[IsEmpty]    线性表" << (IsEmpty(L) ? "为空" : "不为空") << endl;
     cout << "[InsertElem] 插入从字母 " << cooe1 << " 开始往后的 " << cooe2 << " 个字母" << endl;
     cout << "   > ";
     for (int i = 'a'; i < 'a' + cooe2; i++)
          InsertElem(L, ListLength(L) + 1, i);
     PrintList(L);
     cout << "[RemoveElem] 删除第 " << ListLength(L) - 5 << " 个位置的元素 ";
     RemoveElem(L, ListLength(L) - 5, result);
     cout << result << endl;
     cout << "   > ";
     PrintList(L);
     cout << endl;

     int pos = ListLength(L) / 2;
     cout << "[IsEmpty]    线性表" << (IsEmpty(L) ? "为空" : "不为空") << endl;
     GetElem(L, pos, result);
     cout << "[GetElem]    " << (result == 'a' + (pos - 1) ? "[验证正确]" : "[验证错误] ") << "第 " << pos << " 个位置的元素为" << result << endl;
     cout << "[LocateElem] " << ((LocateElem(L, 'f') == 'f' - 'a') ? "[验证正确]" : "[验证错误] ") << "f 在第 " << LocateElem(L, 'f') << " 个结点" << endl
          << endl;

     cout << "[DestroyList]销毁列表" << endl;
     DestroyList(L);
     cout << endl;
     return 0;
}

int TestDuLinkList()
{
     cout << "测试双链表 >" << endl;
     SqList L;
     ElemType result;
     ElemType cooe1 = 'a';
     int cooe2 = 10;
     // cout << "基本功能：初始化(InitList) > 获取表长(ListLength)" << endl
     //      << "基本功能：获取指定位置的元素(GetElem) > 获取元素位置(LocateElem) > 判断是否为空(IsEmpty)" << endl;
     cout << "[InitList]   初始化列表" << endl;
     InitList(L);
     cout << endl;
     cout << "[IsEmpty]    双链表" << (IsEmpty(L) ? "为空" : "不为空") << endl;
     cout << "[InsertElem] 插入从字母 " << cooe1 << " 开始往后的 " << cooe2 << " 个字母" << endl;
     cout << "   > ";
     for (int i = 'a'; i < 'a' + cooe2; i++)
          InsertElem(L, ListLength(L) + 1, i);
     PrintList(L);
     cout << "[RemoveElem] 删除第 " << ListLength(L) - 5 << " 个位置的元素 ";
     RemoveElem(L, ListLength(L) - 5, result);
     cout << result << endl;
     cout << "   > ";
     PrintList(L);
     cout << endl;

     int pos = ListLength(L) / 2;
     cout << "[IsEmpty]    双链表" << (IsEmpty(L) ? "为空" : "不为空") << endl;
     GetElem(L, pos, result);
     cout << "[GetElem]    " << (result == 'a' + (pos - 1) ? "[验证正确]" : "[验证错误] ") << "第 " << pos << " 个位置的元素为" << result << endl;
     cout << "[LocateElem] " << ((LocateElem(L, 'f') == 'f' - 'a') ? "[验证正确]" : "[验证错误] ") << "f 在第 " << LocateElem(L, 'f') << " 个结点" << endl
          << endl;

     cout << "[DestroyList]销毁列表" << endl;
     DestroyList(L);
     cout << endl;
     return 0;
}

int TestSqStack()
{
     cout << "测试线栈 >" << endl;
     SqStack L;
     ElemType result;
     ElemType cooe1 = 'a';
     int cooe2 = 10;
     cout << "[InitStack]   初始化线栈" << endl;
     InitStack(L);
     cout << endl;
     cout << "[StackEmpty]    线栈" << (StackEmpty(L) ? "为空" : "不为空") << endl;
     cout << "[Push] 插入从字母 " << cooe1 << " 开始往后的 " << cooe2 << " 个字母" << endl;
     cout << "   > ";
     for (int i = 'a'; i < 'a' + cooe2; i++)
          Push(L, i);
     PrintStack(L);
     cout << "[Pop] 删除第 " << StackLength(L) - 5 << " 个位置的元素 ";
     Pop(L, result);
     cout << result << endl;
     cout << "   > ";
     PrintStack(L);
     cout << endl;

     // int pos = StackLength(L) / 2;
     // cout << "[IsEmpty]    线栈" << (StackEmpty(L) ? "为空" : "不为空") << endl;
     // GetElem(L, pos, result);
     // cout << "[GetElem]    " << (result == 'a' + (pos - 1) ? "[验证正确]" : "[验证错误] ") << "第 " << pos << " 个位置的元素为" << result << endl;
     // cout << "[LocateElem] " << ((LocateElem(L, 'f') == 'f' - 'a') ? "[验证正确]" : "[验证错误] ") << "f 在第 " << LocateElem(L, 'f') << " 个结点" << endl
     //      << endl;

     cout << "[DestroyStack]销毁线栈" << endl;
     DestroyStack(L);
     cout << endl;
     return 0;
}

int TestSqQueue()
{
     cout << "测试线性队列 >" << endl;
     SqQueue L;
     ElemType result;
     ElemType cooe1 = 'a';
     int cooe2 = 10;
     cout << "[InitQueue]   初始化线性队列" << endl;
     InitQueue(L);
     cout << endl;
     cout << "[QueueEmpty]    线性队列" << (QueueEmpty(L) ? "为空" : "不为空") << endl;
     cout << "[EnQueue] 入队：从字母 " << cooe1 << " 开始往后的 " << cooe2 << " 个字母" << endl;
     cout << "   > ";
     for (int i = 'a'; i < 'a' + cooe2; i++)
          if (!EnQueue(L, i))
               printf("ERROR ENQUEUE %c\n", i);
     PrintQueue(L);
     cout << "[DeQueue] 出队：第 " << QueueLength(L) - 5 << " 个位置的元素 ";
     DeQueue(L, result);
     cout << result << endl;
     cout << "   > ";
     PrintQueue(L);
     cout << endl;

     cout << "[GetHead] 表头元素为 " << GetHead(L) << endl;
     // int pos = QueueLength(L) / 2;
     // cout << "[IsEmpty]    线性队列" << (QueueEmpty(L) ? "为空" : "不为空") << endl;
     // GetElem(L, pos, result);
     // cout << "[GetElem]    " << (result == 'a' + (pos - 1) ? "[验证正确]" : "[验证错误] ") << "第 " << pos << " 个位置的元素为" << result << endl;
     // cout << "[LocateElem] " << ((LocateElem(L, 'f') == 'f' - 'a') ? "[验证正确]" : "[验证错误] ") << "f 在第 " << LocateElem(L, 'f') << " 个结点" << endl
     //      << endl;

     cout
         << "[DestroyQueue]销毁线性队列" << endl;
     DestroyQueue(L);
     cout << endl;
     return 0;
}

int TestLinkStack()
{
     cout << "测试链栈 >" << endl;
     LinkStack L;
     ElemType result;
     ElemType cooe1 = 'a';
     int cooe2 = 10;
     cout << "[InitStack]   初始化链栈" << endl;
     InitStack(L);
     cout << endl;
     cout << "[StackEmpty]    链栈" << (StackEmpty(L) ? "为空" : "不为空") << endl;
     cout << "[Push] 插入从字母 " << cooe1 << " 开始往后的 " << cooe2 << " 个字母" << endl;
     cout << "   > ";
     for (int i = 'a'; i < 'a' + cooe2; i++)
          Push(L, i);
     PrintStack(L);
     cout << "[Pop] 删除第 " << StackLength(L) - 5 << " 个位置的元素 ";
     Pop(L, result);
     cout << result << endl;
     cout << "   > ";
     PrintStack(L);
     cout << endl;

     // int pos = StackLength(L) / 2;
     // cout << "[IsEmpty]    链栈" << (StackEmpty(L) ? "为空" : "不为空") << endl;
     // GetElem(L, pos, result);
     // cout << "[GetElem]    " << (result == 'a' + (pos - 1) ? "[验证正确]" : "[验证错误] ") << "第 " << pos << " 个位置的元素为" << result << endl;
     // cout << "[LocateElem] " << ((LocateElem(L, 'f') == 'f' - 'a') ? "[验证正确]" : "[验证错误] ") << "f 在第 " << LocateElem(L, 'f') << " 个结点" << endl
     //      << endl;

     cout << "[DestroyStack]销毁链栈" << endl;
     DestroyStack(L);
     cout << endl;
     return 0;
}

int TestLinkQueue()
{
     cout << "测试链式队列 >" << endl;
     LinkQueue L;
     ElemType result;
     ElemType cooe1 = 'a';
     int cooe2 = 10;
     cout << "[InitQueue]   初始化链式队列" << endl;
     InitQueue(L);
     cout << endl;
     cout << "[QueueEmpty]    链式队列" << (QueueEmpty(L) ? "为空" : "不为空") << endl;
     cout << "[EnQueue] 入队：从字母 " << cooe1 << " 开始往后的 " << cooe2 << " 个字母" << endl;
     cout << "   > ";
     for (int i = 'a'; i < 'a' + cooe2; i++)
          if (!EnQueue(L, i))
               printf("ERROR ENQUEUE %c\n", i);
     PrintQueue(L);
     GetHead(L, result);
     cout << "[GetHead] 表头元素为 " << result << endl;
     cout << "[DeQueue] 出队：";
     DeQueue(L, result);
     cout << result << endl;
     cout << "[QueueLength] 此时表长为 " << QueueLength(L) << endl
          << "   > ";
     PrintQueue(L);
     GetHead(L, result);
     cout << "[GetHead] 表头元素为 " << result << endl;
     cout << endl;
     // int pos = QueueLength(L) / 2;
     // cout << "[IsEmpty]    链式队列" << (QueueEmpty(L) ? "为空" : "不为空") << endl;
     // GetElem(L, pos, result);
     // cout << "[GetElem]    " << (result == 'a' + (pos - 1) ? "[验证正确]" : "[验证错误] ") << "第 " << pos << " 个位置的元素为" << result << endl;
     // cout << "[LocateElem] " << ((LocateElem(L, 'f') == 'f' - 'a') ? "[验证正确]" : "[验证错误] ") << "f 在第 " << LocateElem(L, 'f') << " 个结点" << endl
     //      << endl;

     cout << "[DestroyQueue]销毁链式队列" << endl;
     DestroyQueue(L);
     cout << endl;
     return 0;
}
