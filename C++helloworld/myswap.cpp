#include "myswap.h"
#include<iostream>
// 如果不需要返回值，可以返回void
void  myswap(int a, int b)
{
    cout << "交换前的数：" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "交换后的数：" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}