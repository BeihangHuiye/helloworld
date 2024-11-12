#include <iostream>
using namespace std;


// 函数的声明，可以提前告诉编译器函数的存在
int add(int num1, int num2);
void  swap(int a, int b);
void test01();
void test02(int a);
int test03();
int test04(int a, int b);
int max(int a, int b);

// 函数的定义，一般分为五个步骤
// 1、返回值类型
// 2、函数名
// 3、参数列表
// 4、函数体
// 5、return语句
/*
返回值类型 函数名(参数列表)
{
	函数体;

	return 返回值;
}
*/

// 案例：写一个加法函数，实现两个整数的相加，并返回结果
// 这里的num1和num2是形参，即形式参数，代表的是函数的参数
int add(int num1, int num2)
{
    	int sum = num1 + num2;
        return sum;
}	

// 值传递
// 1、函数的形参和实参分别占有不同的内存空间，对形参的修改不会影响实参
// 2、值传递时，如果形参类型是基本数据类型，则实参将数值传递给形参

// 如果不需要返回值，可以返回void
void  swap(int a, int b)
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

// 函数的常见类型
// 1、无参无返
void test01()
{
    cout << "这是一个无参无返的函数" << endl;
}

// 2、有参无返
void test02(int a)
{
    cout << "这是一个有参无返的函数" << endl;
    cout << "a = " << a << endl;
}

// 3、无参有返
int test03() 
{
    cout << "这是一个无参有返的函数" << endl;
    return 10;
}

// 4、有参有返
int test04(int a, int b)
{
    cout << "这是一个有参有返的函数" << endl;
    return a + b;
}


// 函数的声明
// 声明：函数的声明可以多次，但是函数的定义只能有一次
int max(int a, int b)
{
    return a > b ? a : b;
}


int main04()
{
	// 函数的调用
    int a = 10;
    int b = 20;
    // 这里的a和b是实参，即实际参数，代表的是函数的调用者传递给函数的值
    swap(a, b);

    cout << "max = " << max(a, b) << endl;


    // 无参无返函数的调用
    test01();

    // 有参无返函数的调用
    test02(100);

    // 无参有返函数的调用
    int num = test03();
    cout << "num = " << num << endl;

    // 有参有返函数的调用
    int sum = test04(10, 20);
    cout << "sum = " << sum << endl;

	system("pause");
	return 0;
}