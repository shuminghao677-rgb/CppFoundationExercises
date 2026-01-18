#include <iostream>
#include <string>
using namespace std;
class Student;
class Student
{
public:
    int id;
    string name;
    int age;
    string addr;
    void say_hi() const{
        cout<<endl;
        cout<<"我叫:   "<<name<<endl;
        cout<<"学号是:   "<<id<<endl;
        cout<<"年龄是:   "<<age<<endl;
        cout<<"家庭住址是:   "<<addr<<endl;
        //有了const 就不能在函数内修改变量 比如说 age=3 error
    }
};
//方法1:同时声明赋值对象
int main(){
    class Student stu1={1,"Jack",13,"Shanghai"};
    cout<<stu1.id<<endl;
    cout<<stu1.name<<endl;
    cout<<stu1.age<<endl;
    cout<<stu1.addr<<endl;
    stu1.say_hi();
    return 0;
}
//方法2:分别声明和赋值对象
// int main(){
//     class Student stu2;
//     stu2.id=2;
//     stu2.name="Marry";
//     stu2.age=14;
//     stu2.addr="Beijing";
//     cout<<stu2.id<<endl;
//     cout<<stu2.name<<endl;
//     cout<<stu2.age<<endl;
//     cout<<stu2.addr<<endl;
//     stu2.say_hi();
//     return 0;
// }

