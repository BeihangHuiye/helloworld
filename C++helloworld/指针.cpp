#include <iostream>
using namespace std;

// 实参传递
void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 指针传递
void swap02(int* p1, int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// 冒泡排序函数
void bubbleSort(int* arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        // 查看排序结果
        cout << "第" << i + 1 << "轮排序结果为：";
        for (int k = 0; k < len; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}


int main07()
{

    // 1、定义一个指针
    // 指针定义的语法：   数据类型 *指针变量名 = 地址;
    int a = 10;
    int *p = &a;
    cout << "a的地址为：" << &a << endl;
    cout << "p的值为：" << p << endl;

    // 2、指针的使用
    // 可以通过解引用的方式来访问指针指向的内存
    // 指针前加 * 表示解引用，访问指针指向的内存
    *p = 100;
    cout << "a的值为：" << a << endl;
    cout << "p的值为：" << *p << endl;

    // 3、指针所占用的内存空间
    // 在32位操作系统下，指针占用4个字节的空间，和数据类型无关
    // 在64位操作系统下，指针占用8个字节的空间，和数据类型无关
    int* p1 = &a;
    cout << "p1所占用的内存空间为：" << sizeof(p1) << endl;
    cout << "sizeof(int *) = "<<sizeof(int *) << endl;
    cout << "sizeof(float *) = " << sizeof(float *) << endl;
    cout << "sizeof(double *) = " << sizeof(double *) << endl;
    cout << "sizeof(char *) = " << sizeof(char *) << endl;

    // 4、空指针和野指针
    // 4.1空指针
    // 指针变量指向内存地址为0的内存空间，空指针很危险，不要访问
    // 空指针一般是用于给指针进行初始化，表示这个指针在目前没有指向任何有效的内存空间
    int* p2 = NULL;  //定义有个空指针

    // 0~255的内存空间为系统占用，不可以访问

    // *p2 = 100;  //访问空指针所指向的内存空间，程序崩溃

    // 4.2野指针
    // 野指针是指,指针指向非法的内存空间
    // int* p3 = (int*)0x12345678;  //访问野指针所指向的内存空间，程序崩溃
    // 没有进行地址的申请就直接进行访问，是非法的，导致程序崩溃

    // 5、const修饰指针
    // 5.1 const修饰指针
    // const修饰指针,称之为常量指针，表示指针指向的内存空间不能被修改
    // 特点：常量指针的指向可以改，指针指向的值不可以改
    int a5 = 10;
    int b5 = 120;
    int c5 = 10;
    const int* p5 = &a5;
    cout << "* p5的值为：" << *p5 << endl;  //* p5的值为：10
    // *p5 = 100;  //错误，常量指针的指向的值不可以改
    p5 = &b5;  //正确，常量指针的指向可以改
    cout << "* p5的值为：" << *p5 << endl;  //* p5的值为：120


    // 5.2 const修饰常量
    // const修饰常量，称之为指针常量，指针的指向不可以改，指针指向的值可以改
    int* const p52 = &a5;
    cout << "* p52的值为：" << *p52 << endl;  //* p52的值为：10
    *p52 = 100;  //正确，指针常量的指向的值可以改
    cout << "* p52的值(修改了值)为：" << *p52 << endl;  //* p52的值为：100
    cout << "a5的值为：" << a5 << endl; 
    // p52 = &b5;  //错误，指针常量的指向不可以改

    // 5.3 const既修饰指针又修饰常量
    // const既修饰指针又修饰常量，表示指针指向的内存空间不能被修改，指针的指向也不能改
    const int* const p53 = &a5;
    cout << "* p53的值为：" << *p53 << endl;  //* p53的值为：100

    // 6、指针和数组
    // 作用：指针和数组结合在一起使用，可以方便的访问数组中的元素
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<< "第一个元素arr[0]为：" << arr[0] << endl;

    // 现在使用指针访问数组元素的方式
    int *p6 = arr; //arr就是数组首地址
    cout << "第一个元素*p6为：" << *p6 << endl;

    cout << "第二个元素*(p6+1)为：" << *(p6+1) << endl;

    // 利用指针遍历
    for(int i = 0; i < 10; i++)
    {
        cout << "第" << i+1 << "个元素为：" << *(p6+i) << endl;
    }

    // 7、指针和函数
    // 作用：利用指针作函数参数，可以修改实参的值
    int a7 = 10;
    int b7 = 20;
    swap01(a7, b7);
    // 传入函数之后实参并没有发生改变
    cout << "a7的值为：" << a7 << endl;
    cout << "b7的值为：" << b7 << endl;

    // 地址传递
    swap02(&a7, &b7);
    // 传入函数之后实参发生了改变
    cout << "a7的值为：" << a7 << endl;
    cout << "b7的值为：" << b7 << endl;

    // 总结：如果不想修改实参的值，可以使用值传递，如果想修改实参的值，可以使用地址传递
    
    // 8、指针、数组、函数综合案例
    // 作用：利用指针、数组、函数，实现对数组进行排序
    // (1) 创建数组
    int arr8[10] = {4,3,6,9,1,2,10,8,7,5};
    // (2) 创建函数，利用冒泡排序，对数组进行排序
    bubbleSort(arr8, 10);
    // (3) 遍历数组
    cout << "排序后的数组为：" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << arr8[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;

}