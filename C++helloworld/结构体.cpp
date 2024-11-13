#include<iostream>
using namespace std;

// 1������ѧ���ṹ�壬�����ĳ�Ա�У����������䡢����
// �Զ�����������ͣ�һЩ���͵Ĵ��ӻ����
struct Student
{
	//��Ա�б�
    string name;
    int age;
    double score;
    };

// ǰ�涨����һ��Student�ṹ�壬�����ٶ���һ���ṹ��
struct Teacher
{
    string name;  // ��ʦ������
    int id;       // ��ʦ�Ĺ���
    struct Student stu;  // ��ʦ���̵�ѧ����ע�⣬����Ҫ�ȶ���Student
};

/*

// 2������ѧ���ṹ�����
// (1) struct �ṹ���� ������;
struct Student s1;
// (2) struct �ṹ���� ������={��Ա1��ֵ����Ա2��ֵ��...};
struct Student s2 = {"����", 18, 98.5};
// (3) �ڶ���ṹ��ʱ˳�㴴������
struct Student
{
    //��Ա�б�
    string name;
    int age;
    double score;
    } s3 = {"����", 21, 92.5};

*/
struct Student31
{
    //��Ա�б�
    string name;
    int age;
    double score;
}s31;

struct Student32
{
    //��Ա�б�
    string name;
    int age;
    double score;
}s32 = { "����", 21, 92.5 };


int main()
{
	// �ṹ��
	// �ṹ����һ���ɲ�ͬ���͵�������ɵ����ݼ��ϣ����Կ�����һ���Զ������������
	
    // 1���ṹ�嶨��
	// �﷨��struct �ṹ����{��Ա�б�};
	// ͨ���ṹ�崴�����������ַ�ʽ
	// (1) struct �ṹ���� ������;
    // (2) struct �ṹ���� ������={��Ա1��ֵ����Ա2��ֵ��...};
    // (3) struct �ṹ���� ������(��Ա1��ֵ����Ա2��ֵ��...);


	// 2���ṹ���������
    // (1) struct �ṹ���� ������;
    // �ڶ���ṹ�������ʱ�򣬿���ʡ��struct�ؼ���
    struct Student s1;
    s1.name = "����";
    s1.age = 18;
    s1.score = 98.5;
    cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;

    // (2) struct �ṹ���� ������={��Ա1��ֵ����Ա2��ֵ��...};
    struct Student s2 = {"����", 20, 90.5};
    cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;

    // (3) �ڶ���ṹ��ʱ˳�㴴������
    s31.age = 22;
    s31.name = "����";
    s31.score = 88.5;
    cout << "������" << s31.name << " ���䣺" << s31.age << " ������" << s31.score << endl;
    cout << "������" << s32.name << " ���䣺" << s32.age << " ������" << s32.score << endl;

    // 3���ṹ������
    // �﷨��struct �ṹ���� ������[Ԫ�ظ���]={{}��{}��...};
    // ��1������һ���ṹ��(�õ������Student)
    // ��2������һ���ṹ������
    struct Student s3[3] = {
        {"����", 18, 98.5},
        {"����", 20, 90.5},
        {"����", 22, 88.5}
    };
    //��3�����ṹ�������е�Ԫ�ظ�ֵ
    // �ڣ�2�������Ѿ����ṹ�������е�Ԫ�ظ�ֵ�ˣ���������Ͳ���Ҫ�ٸ�ֵ��
    // Ҳ���ԶԳ�ʼֵ�����޸ģ������
    s3[0].name = "����";
    s3[0].age = 19;
    s3[0].score = 99.5;
    //��4�������ṹ������
    cout << endl;
    cout << "�ṹ������" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "������" << s3[i].name << " ���䣺" << s3[i].age << " ������" << s3[i].score << endl;
    }

    // 4���ṹ��ָ��
    // ���ã�ͨ��ָ����ʽṹ���еĳ�Ա
    // �﷨��struct �ṹ���� *ָ������� = &�ṹ�������;
    // ���ò������� -> ������ͨ���ṹ��ָ�������ʽṹ���еĳ�Ա
    struct Student s4 = {"����", 18, 98.5};
    struct Student* p = &s4;
    cout << endl;
    cout << "�ṹ��ָ��" << endl;
    cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;

    // 5���ṹ��Ƕ��
    // ���ã�һ���ṹ���п��԰�����һ���ṹ��
    // �﷨��struct �ṹ����{��Ա�б�}; struct �ṹ����{��Ա�б�};
    // ������һ���ṹ��Teacher�����а�����һ���ṹ��Student
    struct Teacher t1;
    t1.id = 1001;
    t1.name = "����ʦ";
    t1.stu.name = "����";
    t1.stu.age = 18;
    t1.stu.score = 98.5;
    cout << endl;
    cout << "�ṹ��Ƕ��" << endl;
    cout << "������" << t1.name << " ���ţ�" << t1.id << " ѧ��������" << t1.stu.name << " ѧ�����䣺" << t1.stu.age << " ѧ��������" << t1.stu.score << endl;







	system("pause");
    return 0;
}

