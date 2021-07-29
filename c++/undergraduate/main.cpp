#include <iostream>
#include <iomanip>
#include "./Test.cpp"
#include "./Temp.cpp"
using namespace std;

Status ChoiceMaker()
{
    system("cls");
    int choice;
    printf("请输入您要执行的测试功能：\n 1. 复数(TestComplex)\n 2. 单链表(TestLinkList)\n 3. 双链表(TestDuLinkList)\n 4. 顺序表(TestSqList)\n 5. 线栈(TestSqStack)\n 6. 链栈(TestLinkStack)\n 7. 线性队列(TestSqQueue)\n 8. 链式队列(TestSLinkQueue)\n> ");
    scanf("%d", &choice);
    system("cls");
    while (true)
    {
        printf("1. 复数 2. 单链表 3. 双链表 4. 顺序表 5. 栈 6. 队列 7. 线性队列 8. 链式队列\n============================\n> ");
        switch (choice)
        {
        case 1:
            cout << "1. 复数(TestComplex)" << endl
                 << "============================" << endl;
            TestComplex();
            break;
        case 2:
            cout << "2. 单链表(TestLinkList)" << endl
                 << "============================" << endl;
            TestLinkList();
            break;
        case 3:
            cout << "3. 双链表(TestDuLinkList)" << endl
                 << "============================" << endl;
            TestDuLinkList();
            break;
        case 4:
            cout << "4. 顺序表(TestSqList)" << endl
                 << "============================" << endl;
            TestSqList();
            break;
        case 5:
            cout << "5. 线栈(TestSqStack)" << endl
                 << "============================" << endl;
            TestSqStack();
            break;
        case 6:
            cout << "6. 链栈(TestLinkStack)" << endl
                 << "============================" << endl;
            TestLinkStack();
            break;
        case 7:
            cout << "7. 线性队列(TestSqQueue)" << endl
                 << "============================" << endl;
            TestSqQueue();
            break;
        case 8:
            cout << "8. 链式队列(TestSLinkQueue)" << endl
                 << "============================" << endl;
            TestLinkQueue();
            break;
        case 0:
            ChoiceMaker();
            break;
        default:
            return 0;
        }

        cout << "============================" << endl
             << "请继续输入您要执行的测试功能：> ";
        scanf("%d", &choice);
        system("cls");
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    ChoiceMaker();
    return 0;
}


