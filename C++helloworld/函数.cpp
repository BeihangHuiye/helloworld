#include <iostream>
using namespace std;


// ������������������ǰ���߱����������Ĵ���
int add(int num1, int num2);
void  swap(int a, int b);
void test01();
void test02(int a);
int test03();
int test04(int a, int b);
int max(int a, int b);

// �����Ķ��壬һ���Ϊ�������
// 1������ֵ����
// 2��������
// 3�������б�
// 4��������
// 5��return���
/*
����ֵ���� ������(�����б�)
{
	������;

	return ����ֵ;
}
*/

// ������дһ���ӷ�������ʵ��������������ӣ������ؽ��
// �����num1��num2���βΣ�����ʽ������������Ǻ����Ĳ���
int add(int num1, int num2)
{
    	int sum = num1 + num2;
        return sum;
}	

// ֵ����
// 1���������βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�ռ䣬���βε��޸Ĳ���Ӱ��ʵ��
// 2��ֵ����ʱ������β������ǻ����������ͣ���ʵ�ν���ֵ���ݸ��β�

// �������Ҫ����ֵ�����Է���void
void  swap(int a, int b)
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

// �����ĳ�������
// 1���޲��޷�
void test01()
{
    cout << "����һ���޲��޷��ĺ���" << endl;
}

// 2���в��޷�
void test02(int a)
{
    cout << "����һ���в��޷��ĺ���" << endl;
    cout << "a = " << a << endl;
}

// 3���޲��з�
int test03() 
{
    cout << "����һ���޲��з��ĺ���" << endl;
    return 10;
}

// 4���в��з�
int test04(int a, int b)
{
    cout << "����һ���в��з��ĺ���" << endl;
    return a + b;
}


// ����������
// �������������������Զ�Σ����Ǻ����Ķ���ֻ����һ��
int max(int a, int b)
{
    return a > b ? a : b;
}


int main04()
{
	// �����ĵ���
    int a = 10;
    int b = 20;
    // �����a��b��ʵ�Σ���ʵ�ʲ�����������Ǻ����ĵ����ߴ��ݸ�������ֵ
    swap(a, b);

    cout << "max = " << max(a, b) << endl;


    // �޲��޷������ĵ���
    test01();

    // �в��޷������ĵ���
    test02(100);

    // �޲��з������ĵ���
    int num = test03();
    cout << "num = " << num << endl;

    // �в��з������ĵ���
    int sum = test04(10, 20);
    cout << "sum = " << sum << endl;

	system("pause");
	return 0;
}