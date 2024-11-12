#include<iostream>
using namespace std;


int main02()
{
    //1.顺序结构
    // 按照顺序执行代码

    //2.选择结构
    //2.1 if语句
        //基本语法：  if(条件表达式){条件满足执行的语句}
    //2.1.1 单if语句
      //使用场景：用户输入一个分数，如果分数大于60，则输出及格，否则输出不及格
      //int score = 0;
      //cout << "请输入一个分数" << endl;
      //cin >> score;
      //cout << "你输入的分数是" << score << endl;
      //if (score > 60)  //注意不要加分号
      //{ 
      //    cout << "及格" << endl;
      //}

    //2.1.2 if-else语句，多行格式if语句
      //使用场景：用户输入一个分数，如果分数大于60，则输出及格，否则输出不及格
      //int score = 0;
      //cout << "请输入一个分数" << endl;
      //cin >> score;
      //cout << "你输入的分数是" << score << endl;
      //if (score > 60)  //注意不要加分号
      //{
      //    cout << "及格" << endl;
      //}
      //else
      //{
      //    cout << "不及格" << endl;
      //}

    //2.1.3 多条件的if语句
      //使用场景：用户输入一个分数，如果分数大于90，则输出优秀，如果分数大于60，则输出及格，否则输出
    //int score = 0;
    //cout << "请输入一个分数" << endl;
    //cin >> score;
    //cout << "你输入的分数是" << score << endl;
    //if (score > 90)  //注意不要加分号
    //{
    //    cout << "优秀" << endl;
    //}
    //else if (score > 80)
    //{
    //    cout << "良好" << endl;
    //}
    //else if (score > 60)
    //{
    //    cout << "及格" << endl;
    //}
    //else
    //{
    //    cout << "不及格" << endl;
    //}
    //2.1.4 嵌套if语句
    // 使用场景：用户输入一个分数，如果分数大于90，则输出优秀，如果分数大于60，则输出及格，否则输出不及格
                 //在分数大于90中，如果分数大于95，则输出满绩点，如果等于100，则输出满分
    //int score = 0;
    //cout << "请输入一个分数" << endl;
    //cin >> score;
    //cout << "你输入的分数是" << score << endl;
    //if (score > 90)  //注意不要加分号
    //{
    //    if(score > 95)
    //    {
    //        cout << "满绩点" << endl;
    //    }
    //    else if(score == 100)
    //    {
    //        cout << "满分" << endl;
    //    }
    //    else
    //    {
    //        cout << "优秀" << endl;
    //    }
    //}
    //else if (score > 80)
    //{
    //    cout << "良好" << endl;
    //}
    //else if (score > 60)
    //{       
    //    cout << "及格" << endl;
    //}
    //else
    //{
    //    cout << "不及格" << endl;
    //}

    // 2.1.5 三目运算符
    // 语法：表达式1 ? 表达式2 : 表达式3
    // 运行逻辑：如果表达式1的值为真，则运行表达式2，并返回表达式2的结果，否则运行表达式3，并返回表达式3的结果
    
    /*
    int a = 10;
    int b = 20;
    int c = 0;
    c = a > b ? a : b;
    cout << "c = " << c << endl; 
    //在C++中，三目运算符返回的是变量，可以继续赋值
    (a > b ? a : b) = 100; //如果a>b为真，则a=100，否则b=100
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    */


    // 2.2 switch语句
    // 语法：
    /*
    swith(表达式）
        {
          case value1: 执行语句; break;
          case value2: 执行语句; break;
          ...
          default: 执行语句; break;
        }
    */
    // 使用场景：用户输入一个月份，输出对应的季节
    /*
    int month = 0;
    cout << "请输入一个月份：" << endl;
    cin >> month;
    switch (month)
    {
    case 1: cout << "冬季" << endl; break;
    case 2: cout << "冬季" << endl; break;
    case 3: cout << "春季" << endl; break;
    case 4: cout << "春季" << endl; break;
    case 5: cout << "春季" << endl; break;
    case 6: cout << "夏季" << endl; break;
    case 7: cout << "夏季" << endl; break;
    case 8: cout << "夏季" << endl; break;
    case 9: cout << "秋季" << endl; break;
    case 10: cout << "秋季" << endl; break;
    case 11: cout << "秋季" << endl; break;
    case 12: cout << "冬季" << endl; break;
    default: cout << "输入有误" << endl; break;
    }
    */
    // switch语句注意事项：
    // 1.switch语句中表达式类型只能是整型或字符型
    // 2.case后面只能是常量,不能是一个区间
    // 3.default是可选的
    // 4.break可以省略，但是会带来错误，不建议省略
    // 5.switch语句中可以没有break，程序会一直向下执行，直到遇到break或者switch结束
    // 6.如果switch中所有case都没有匹配到，则会执行default
    // 7.如果case后的表达式值相等，则只会执行第一个case
    // 8.如果想要执行多个case，可以在case后不写break

    // switch语句和if语句的区别：
    // 1.if语句通常用于范围判断，而switch语句通常用于等值判断
    // 2.if语句一般用于判断区间，而switch语句一般用于判断具体的值
    // 3.switch语句通常效率比if语句高
    // 4.switch语句只能判断等值，不能判断区间


    // 3.循环结构
    // 3.1 while循环
    // 语法：while(循环条件){循环语句}
    // 只要循环条件为真，就执行循环语句
    // while循环注意事项：
    //  1.使用while循环时，一定要避免死循环
    //  2.在实际开发中，while循环使用的非常少，while循环可以由for循环和do...while循环来代替
    //  示例: 打印0-10
    /*
    int i = 0;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }
    */
    
   /*
    // 猜数字游戏
    // 生成一个1-100之间的随机数，然后让用户来猜数字，如果猜对了，就结束程序，如果猜错了，就告诉用户猜大了还是猜小了，然后继续猜，直到猜对为止
    //1、生成一个1-100之间的随机数
    int num = rand() % 100 + 1;
    cout << "随机数是：" << num << endl;
    //2、让用户来猜数字
    int guess = 0;
    cout << "请输入一个1-100之间的数字：" << endl;
    cin >> guess;
    //3、判断用户猜的数字和生成的随机数是否相等
    while (guess != num)
    {
        if (guess > num)
        {
            cout << "猜大了" << endl;
        }
        else
        {
            cout << "猜小了" << endl;
        }
        cout << "请重新输入一个1-100之间的数字：" << endl;
        cin >> guess;
    }
    cout << "恭喜你，猜对了" << endl;
    */

    // 3.2 do...while循环
    // 语法：do{循环语句}while(循环条件)
    // 只要循环条件为真，就执行循环语句
    // 特点是先执行循环语句，再判断循环条件
    
    // do...while循环注意事项：
    //  1.使用do...while循环时，一定要避免死循环
    //  2.在实际开发中，do...while循环使用的非常少，do...while循环可以由for循环和while循环来代替
    //  示例: 打印0-9
    //int i=0;
    //do
    //{
    //    cout << i << endl;
    //    i++;
    //    }
    //while (i < 10);
    
    //练习：水仙花打印100-999之间的水仙花数
    //水仙花数是指一个三位数，其各位数字的立方和等于该数本身。例如：153是一个水仙花数，因为1^3 + 5^3 + 3^3 = 153。
    //要求：使用do...while循环来实现
    // (1)将所有三位数进行输出
    // (2)将每个三位数的百位、十位、个位进行拆分
    //      获取个位数   num % 10;
    //      获取十位数   num / 10 % 10;
    //      获取百位数   num / 100;
    // (3)将拆分后的百位、十位、个位进行立方运算
    // (4)将立方运算的结果进行相加
    // (5)判断相加的结果是否等于原数
/*
    int num = 100;
    do 
    {
        int ge = num % 10;
        int shi = num / 10 % 10;
        int bai = num / 100;
        if (ge * ge * ge + shi * shi * shi + bai * bai * bai == num)
        {
            cout << num << endl;
        }
        num++;
    } while (num <= 999);
*/
    // 3.3 for循环
    // 语法：for(起始表达式; 循环条件; 循环后操作){循环语句}
    // for循环注意事项：
    //  1.使用for循环时，一定要避免死循环
    //  2.在实际开发中，for循环使用的非常广泛
    //  示例: 打印0-9
    /*
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
    */

    
    // 使用for循环做一个敲桌子游戏
    // 1-100之间，如果数字是7的倍数，或者个位数是7，或者十位数是7，就输出敲桌子
    // 要求：使用for循环来实现
    /*
    for (int i = 1; i <= 100; i++)
    {
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
        {
            cout << i << ":敲桌子" << endl;
        }
    }
    */
    
    // 3.4 循环嵌套
    // 循环嵌套是指在一个循环中再嵌套一个循环
    // 循环嵌套注意事项：
    //  1.在实际开发中，循环嵌套使用的非常广泛
    //  2.循环嵌套的层数最好不要超过3层
    //  3.外循环一次，内循环执行n次，n为内循环的条件
    //  示例: 打印九九乘法表


    // i为外循环变量，j为内循环变量
    // i为行数，j为列数
    /*
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " * " << i << " = " << i * j << "\t";
        }
        cout << endl;
    }
    */

    // 4.跳转语句
    // 4.1 break语句
    // break语句用于跳出循环
    // break语句注意事项：break语句只能跳出最近一层的循环
    
    // 在switch语句中使用break语句
    // 1: 普通难度 2：中等难度 3：困难难度 
    /*
    int level = 0;
    cout << "请输入难度等级：";
    cin >> level;
    switch (level)
    {
    case 1:
        cout << "普通难度" << endl;
        break;
    case 2:
        cout << "中等难度" << endl;
        break;
    case 3:
        cout << "困难难度" << endl;
        break;
    default:
        cout << "输入错误" << endl;
        break;
    }
    */

    // 在循环语句中使用break语句
    // 打印1-10之间的数字，如果数字是5，就结束循环
    /*
    int i = 0;
    while (i < 10)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
        i++;
    }
    */



    // 4.2 continue语句
    // continue语句用于跳过本次循环，继续下一次循环
    // continue语句注意事项：continue语句只能跳过最近一层的循环
    // 打印1-10之间的数字，如果数字是5，就跳过本次循环
    /*
    int i = 0;
    while (i < 10)
    {
        if (i == 5)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }
    */

    // 4.3 goto语句
    // goto语句的语法：goto 标签名;
    // goto语句用于无条件跳转到指定的标签
    // goto语句注意事项：goto语句容易造成代码混乱，一般不建议使用
    // 打印1-10之间的数字，如果数字是5，就跳转到指定的标签 
    /*
    int i = 0;
    while (i < 10)
    {
        if (i == 5)
        {
            goto FLAG;
        }
        cout << i << endl;
        i++;
    }
    FLAG:
        cout << "跳到这里了：end" << endl;
    */
    
    // 4.4 return语句
    // return语句用于从函数中返回
    // return语句注意事项：return语句可以返回任意类型的值，也可以不返回值
    


    



    system("pause");
    return 0;
}