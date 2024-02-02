#include <iostream>
using namespace std;
#include "calculate.h"

void calculate :: SetNum(int _Num1 , int _Num2)
{
    Num1 = _Num1;
    Num2 = _Num2;
}
int calculate :: GetAdd(int _Num1 , int _Num2)
{
    return Num1 + Num2;
}
int calculate :: GetSubtract(int _Num1 , int _Num2)
{
    return Num1 - Num2;
}
int calculate :: GetMultiple(int _Num1 , int _Num2)
{
    return Num1 * Num2;
}
int calculate :: GetDivide(int _Num1 , int _Num2)
{
    return Num1 / Num2;
}