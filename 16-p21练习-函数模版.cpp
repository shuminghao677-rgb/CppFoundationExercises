#include <iostream>
#include <string>
using namespace std;
#include <typeinfo>


//基础引用传参 需要声明类型 当int用T替代就可以实现所有类型变量
// void swap1(int & a,int & b){
//     int tmp;
//     tmp=a;
//     a=b;
//     b=tmp;
// }

// int main(){
//     int x=10;
//     int y=20;
//     cout<<endl;
//     cout<<"原来的x是:   "<<x<<endl;
//     cout<<"原来的y是:   "<<y<<endl;
//     swap1(x,y);
//     cout<<"现在的x是:   "<<x<<endl;
//     cout<<"现在的y是:   "<<y<<endl;
//     return 0;
// }

// template<class T>//用T作为模版的函数名，来声明函数模版
// void swap2(T & a,T & b){
//     T tmp;
//     tmp=a;
//     a=b;
//     b=tmp;
// }
// int main(){
//     int x=12,y=21;
//     cout<<endl;
//     cout<<"原来的x是:   "<<x<<endl;
//     cout<<"原来的y是:   "<<y<<endl;
//     swap2<int>(x,y);
//     cout<<"现在的x是:   "<<x<<endl;
//     cout<<"现在的y是:   "<<y<<endl;
//     return 0;
// }
template<class T>
T max1(const T & a,T & b){
    return a>b?a:b;
}
//补充知识点 这里是一个三元的条件statement
//a>b?a:b 相当于
// if (a>b){
//     return a;
// }else{
//     return b;
// }

//然后作为有值返回的函数 不可以用void 只能用类型 T max(T & a,T & b){}这样子作为引用函数来传参

int main(){
    int x=10;
    double y=3.14;
    cout<<endl<<max1<double>(x,y)<<endl<<endl;
    cout<<endl<<typeid(max1<double>(x,y)).name()<<endl<<endl;
    return 0;
}
//关于type文件 #include <typeinfo> #include <typeinfo>\
//type 函数 typeid(max1<double>(x,y)).name() print the type of output