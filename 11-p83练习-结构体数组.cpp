#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    string gender;
};

int main(){
    //两种建立结构体类型变量数组
    //1.先分别声明 变量stu1 和 stu2 再建立数组
    struct Student stu1={"Jack",13,"male"};
    struct Student stu2={"Marry",11,"female"};
    struct Student v[]={stu1,stu2};
    //1.1或者可以直接一行 这个最常用
    struct Student v[]={
        {"Jack",13,"male"},
        {"Marry",11,"female"}
    };
    //2.先占位 结构体类型数组的长度是2，然后分别v[0],v[1]赋值
    struct Student v[2];
    v[0]={"Jack",13,"male"};
    v[1]={"Marry",11,"female"};
    
    for (int i=0;i<sizeof(v)/sizeof(v[0]);i++){
        cout<<endl<<"名字:  "<<v[i].name<<endl;
        cout<<endl<<"年龄:  "<<v[i].age<<endl;
        cout<<endl<<"性别:  "<<v[i].gender<<endl;
    }
    return 0;
    
}