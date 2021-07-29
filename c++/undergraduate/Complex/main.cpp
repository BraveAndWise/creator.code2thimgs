#include <iostream>
#include "Complex.h"

int main(int argc, char const *argv[])
{
    Complex A, B;
    Create(A, 8, 4);
    Create(B, 4, 0);
    Print(A);
    Print(B);
    Print(Add(A, B));
    Print(Sub(A, B));

    return 0;
}

