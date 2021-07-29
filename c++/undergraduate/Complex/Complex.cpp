#include <iostream>
#include "Complex.h"

void Create(Complex &C, float re, float im){
    C.Re = re;
    C.Im = im;
}

float GetReal(Complex C){
    return C.Re;
}
float GetImag(Complex C){
    return C.Im;
}
Complex Add(Complex C1, Complex C2){
    Complex sum;
    sum.Re = C1.Re + C2.Re;
    sum.Im = C1.Im + C2.Im;
    return sum;
}
Complex Sub(Complex C1, Complex C2){
    Complex difference;
    difference.Re = C1.Re - C2.Re;
    difference.Im = C1.Im - C2.Im;
    return difference;
}

void Print(Complex C){
    printf("%.f + %.fi", C.Re, C.Im);
}

