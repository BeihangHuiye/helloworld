#include "myswap.h"
#include<iostream>
// �������Ҫ����ֵ�����Է���void
void  myswap(int a, int b)
{
    cout << "����ǰ������" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "�����������" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}