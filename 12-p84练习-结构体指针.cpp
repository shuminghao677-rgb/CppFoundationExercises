#include <iostream>
#include <string>
using namespace std;

// struct Student
// {
//     string name;
//     int age=13;
//     string major="computer science";
// };

//  int main(){
//     struct Student stu1={"Jack"};
//     struct Student *p=&stu1;
//     cout<<endl<<"内存大小是:   "<<sizeof(stu1)<<endl;
//     cout<<endl<<"指针指向是:   "<<p<<endl;
//     cout<<endl<<"指针对应的变量中姓名是:   "<<(*p).name<<endl;
//     cout<<endl<<"指针对应的变量中年龄是:   "<<(*p).age<<endl;
//     cout<<endl<<"指针对应的变量中专业是:   "<<(*p).major<<endl;
//     return 0;
//  }
struct Student
{
    string name;
    int age=13;
    string major="computer science";
};

 int main(){
    struct Student *p= new Student {"Jack"};
    //对于 整数的指针动态内存分配要 int *p = new int(5);

    cout<<endl<<"内存大小是:   "<<sizeof(*p)<<endl;
    cout<<endl<<"指针指向是:   "<<p<<endl;
    cout<<endl<<"指针对应的变量中姓名是:   "<<(*p).name<<endl;
    cout<<endl<<"指针对应的变量中年龄是:   "<<(*p).age<<endl;
    cout<<endl<<"指针对应的变量中专业是:   "<<(*p).major<<endl;
    //两种等效的表达
    // cout<<endl<<"指针对应的变量中姓名是:   "<<p->name<<endl;
    // cout<<endl<<"指针对应的变量中年龄是:   "<<p->age<<endl;
    // cout<<endl<<"指针对应的变量中专业是:   "<<p->major<<endl;
    delete p;
    cout<<endl<<"释放后指针对应的内存地址:   "<<p<<"，此时是野指针。"<<endl;
    p=nullptr;
    cout<<endl<<"将指针设置为空指针之后的内存地址:   "<<p<<"，此时是空指针。"<<endl;
    return 0;
 }
//每个 字符串的sizeof都是24bytes
// int main(){
//     string str1="computer science";
//     cout<<sizeof(str1)<<endl;
//     return 0;
// }