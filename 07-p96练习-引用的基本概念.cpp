#include <iostream>
using namespace std;

//类型 & 引用变量名=被引用变量 格式固定
//引用的定义：就是对已经有的变量 取一个别名
//引用对象不可更改 比如说 int & b =a; b引用a 就只能永远引用a 不能引用其他变量
//对于引用变量不可更待 但是指针是可以更改的 这里是区别
int main(){
    int a =3;
    int & b =a;
    double d1=3.14;
    double & d2=d1;
    cout<<"a:  "<<a<<endl;
    cout<<"b:  "<<b<<endl;
    b=20;
    cout<<"a:  "<<a<<endl;
    cout<<"b:  "<<b<<endl;
    cout<<"d1:  "<<d1<<endl;
    cout<<"d2:  "<<d2<<endl;
    d1=2.14;
    cout<<"d1:  "<<d1<<endl;
    cout<<"d2:  "<<d2<<endl;
    return 0;
}

//报错写法 就是不能只声明 必须初始化
int main(){
    int num1=20;
    int & num2;
    num2=num1;
    cout<<"num1:  "<<num1<<endl;
    cout<<"num2:  "<<num2<<endl;
    return 0;
}

//报错写法 也不能为空
int main(){
    int num1=20;
    int & num2=nullptr;
    cout<<"num1:  "<<num1<<endl;
    cout<<"num2:  "<<num2<<endl;
    return 0;
}
