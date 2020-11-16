#ifndef TP1_HEADER_H
#define TP1_HEADER_H

#include <cmath>

//Problem 1

void Area_Circumference(const float, float &, float &);

//Problem 2

int Min(int *,const int);

int Max(int *,const int);

//Problem 3

int Fibonacci(int);

// Problem 4

void Mult_Table(const int & num, const int & table_size, int * table);

// Problem 5

enum Operat {
    AND, OR,
};

void Operation(const int & );
void And_Operation();
void Or_Operation();


#endif // TP1_HEADER_H
