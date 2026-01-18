//整个结构体的格式
// struct 结构体类型名
// {
//     变量类型 成员名;
//     变量类型 成员名;
// };

//结构体特点：
//一个结构体类型可以包含多个成员，每个成员类型不限
//可以做到一批不同类型的数据混装在一个结构体内

#include <iostream>
#include <string>
//因为有字符串的出现 所以要在开头加入 #include <string>
using namespace std;


struct Student
{
    string name;
    int age;
    string gender;
};

int main(){
    struct Student stu1;
    stu1={"Jack",11,"male"};
    //分别声明赋值 结构体类型变量
    struct Student stu2={"Marry",13,"female"};
    //对结构体类型变量声明赋值同时进行
    cout<<endl<<"名字:  "<<stu1.name<<endl;
    cout<<endl<<"年龄:  "<<stu1.age<<endl;
    cout<<endl<<"性别:  "<<stu1.gender<<endl;

    cout<<endl<<"名字:  "<<stu2.name<<endl;
    cout<<endl<<"年龄:  "<<stu2.age<<endl;
    cout<<endl<<"性别:  "<<stu2.gender<<endl;
    return 0;
}

