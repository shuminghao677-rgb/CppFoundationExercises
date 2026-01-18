#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string name;
    string major="computer science";
    int age=18;
};
//就是在声明结构体变量的 时候进行赋值就是默认值

int main(){
    struct Student stu1={"Jack"};
    struct Student stu2={"Marry","data science",19};
    cout<<endl<<"姓名:   "<<stu1.name<<endl;
    cout<<endl<<"专业:   "<<stu1.major<<endl;
    cout<<endl<<"年龄:   "<<stu1.age<<endl;
    cout<<endl<<"姓名:   "<<stu2.name<<endl;
    cout<<endl<<"专业:   "<<stu2.major<<endl;
    cout<<endl<<"年龄:   "<<stu2.age<<endl;
    return 0;
}