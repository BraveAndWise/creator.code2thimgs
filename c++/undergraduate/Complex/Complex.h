#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct
{
    float Re;
    float Im;
} Complex;

void Create(Complex &C, float re, float im);

float GetReal(Complex C);

float GetImag(Complex C);
Complex Add(Complex C1, Complex C2);
Complex Sub(Complex C1, Complex C2);

void Print(Complex C);

#endif