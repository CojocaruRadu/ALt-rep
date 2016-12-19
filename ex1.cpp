#include<iostream>
#include<stdlib.h>

using namespace std;
class CVector
{
public:
    int x,y;
    CVector ()
    {
        x=0;
        y=0;
    }
    CVector (int,int);
    CVector operator - (CVector);
};

CVector::CVector (int a, int b)
{
    x = a;
    y = b;
}

CVector CVector::operator- (CVector param)
{
    CVector rez;
    rez.x = x - param.x;
    rez.y = y - param.y;
    return (rez);
}

int main ()
{
    CVector a (3,1);
    CVector b (1,2);
    CVector c;
    c = a - b;
    cout <<"("<< c.x << "," << c.y<<")";
    return 0;
}
