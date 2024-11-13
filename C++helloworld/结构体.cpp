#include<iostream>
using namespace std;

// 1、创建学生结构体，包含的成员有：姓名、年龄、分数
// 自定义的数据类型，一些类型的大杂烩组合
struct Student
{
	//成员列表
    string name;
    int age;
    double score;
    };

// 前面定义了一个Student结构体，这里再定义一个结构体
struct Teacher
{
    string name;  // 老师的姓名
    int id;       // 老师的工号
    struct Student stu;  // 老师所教的学生，注意，这里要先定义Student
};

/*

// 2、创建学生结构体变量
// (1) struct 结构体名 变量名;
struct Student s1;
// (2) struct 结构体名 变量名={成员1的值，成员2的值，...};
struct Student s2 = {"张三", 18, 98.5};
// (3) 在定义结构体时顺便创建变量
struct Student
{
    //成员列表
    string name;
    int age;
    double score;
    } s3 = {"李六", 21, 92.5};

*/
struct Student31
{
    //成员列表
    string name;
    int age;
    double score;
}s31;

struct Student32
{
    //成员列表
    string name;
    int age;
    double score;
}s32 = { "李六", 21, 92.5 };


int main()
{
	// 结构体
	// 结构体是一种由不同类型的数据组成的数据集合，可以看作是一种自定义的数据类型
	
    // 1、结构体定义
	// 语法：struct 结构体名{成员列表};
	// 通过结构体创建变量的三种方式
	// (1) struct 结构体名 变量名;
    // (2) struct 结构体名 变量名={成员1的值，成员2的值，...};
    // (3) struct 结构体名 变量名(成员1的值，成员2的值，...);


	// 2、结构体变量创建
    // (1) struct 结构体名 变量名;
    // 在定义结构体变量的时候，可以省略struct关键字
    struct Student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 98.5;
    cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;

    // (2) struct 结构体名 变量名={成员1的值，成员2的值，...};
    struct Student s2 = {"李四", 20, 90.5};
    cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;

    // (3) 在定义结构体时顺便创建变量
    s31.age = 22;
    s31.name = "王五";
    s31.score = 88.5;
    cout << "姓名：" << s31.name << " 年龄：" << s31.age << " 分数：" << s31.score << endl;
    cout << "姓名：" << s32.name << " 年龄：" << s32.age << " 分数：" << s32.score << endl;

    // 3、结构体数组
    // 语法：struct 结构体名 数组名[元素个数]={{}，{}，...};
    // （1）定义一个结构体(用的上面的Student)
    // （2）创建一个结构体数组
    struct Student s3[3] = {
        {"张三", 18, 98.5},
        {"李四", 20, 90.5},
        {"王五", 22, 88.5}
    };
    //（3）给结构体数组中的元素赋值
    // 在（2）中中已经给结构体数组中的元素赋值了，所以这里就不需要再赋值了
    // 也可以对初始值进行修改，比如把
    s3[0].name = "赵六";
    s3[0].age = 19;
    s3[0].score = 99.5;
    //（4）遍历结构体数组
    cout << endl;
    cout << "结构体数组" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "姓名：" << s3[i].name << " 年龄：" << s3[i].age << " 分数：" << s3[i].score << endl;
    }

    // 4、结构体指针
    // 作用：通过指针访问结构体中的成员
    // 语法：struct 结构体名 *指针变量名 = &结构体变量名;
    // 利用操作符“ -> ”可以通过结构体指针来访问结构体中的成员
    struct Student s4 = {"张三", 18, 98.5};
    struct Student* p = &s4;
    cout << endl;
    cout << "结构体指针" << endl;
    cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

    // 5、结构体嵌套
    // 作用：一个结构体中可以包含另一个结构体
    // 语法：struct 结构体名{成员列表}; struct 结构体名{成员列表};
    // 定义了一个结构体Teacher，其中包含了一个结构体Student
    struct Teacher t1;
    t1.id = 1001;
    t1.name = "王老师";
    t1.stu.name = "张三";
    t1.stu.age = 18;
    t1.stu.score = 98.5;
    cout << endl;
    cout << "结构体嵌套" << endl;
    cout << "姓名：" << t1.name << " 工号：" << t1.id << " 学生姓名：" << t1.stu.name << " 学生年龄：" << t1.stu.age << " 学生分数：" << t1.stu.score << endl;







	system("pause");
    return 0;
}

