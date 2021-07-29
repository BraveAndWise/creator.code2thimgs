#ifndef CLIKE_H
#define CLIKE_H

#include <iostream>
using namespace std;

//函数结果状态代码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
//函数返回值类型，其值是函数结果状态代码
typedef int Status;
typedef char ElemType;
typedef char SElemType;
typedef char QElemType;

#endif
