#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age=13;
    string major="computer science";
};

int main(){
    struct Student *p=new Student[3]{
        {"Jack"},
        {"Marry",11,"data science"},
        {"John"}
    };
    for (int i=0;i<3;i++){
        cout<<"姓名:  "<<(p[i]).name<<endl;
        cout<<"年龄:  "<<(p[i]).age<<endl;
        cout<<"专业:  "<<(p[i]).major<<endl;
        cout<<endl;
    }
    delete[] p;
    p=nullptr;
    return 0;
}
