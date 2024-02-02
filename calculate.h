#include <iostream>
using namespace std;
class calculate
{
protected:
    int Num1, Num2;
public:
    virtual void SetNum(int _Num1,int _Num2);
    virtual int GetAdd(int _Num1,int _Num2);
    virtual int GetSubtract(int _Num1,int _Num2);
    virtual int GetMultiple(int _Num1,int _Num2);
    virtual int GetDivide(int _Num1,int _Num2);
};



