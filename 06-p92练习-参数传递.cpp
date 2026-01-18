#include <iostream>
using namespace std;

//1.直接值传递 是没有任何效果的 因为值传递是单向的

// //一个交换自定义函数
// void switch_num(int a,int b){
//     int tmp;
//     tmp=a;
//     a=b;
//     b=tmp;
// }
// int main(){
//     int x=3;
//     int y=5;
//     cout<<endl<<"the original x :  "<<x<<endl;
//     cout<<endl<<"the original y :  "<<y<<endl<<endl;
//     switch_num(x,y);
//     cout<<endl<<"the current x :  "<<x<<endl;
//     cout<<endl<<"the current y :  "<<y<<endl;
//     return 0;
// }

void switch_num(int a,int b){
    cout<<endl<<"the original a:  "<<a<<endl;
    cout<<endl<<"the original b:  "<<b<<endl;
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
    cout<<endl<<"the current a:  "<<a<<endl;
    cout<<endl<<"the current b:  "<<b<<endl;
}

int main(){
    int x=3;
    int y=5;
    switch_num(x,y);
    return 0;
}

//2.指针传递 自定义函数的形参是指针 内存发生改变 实现交换

// void switch_num(int * a,int * b){
//     int tmp;
//     tmp=*a;
//     *a=*b;
//     *b=tmp;
// }
// int main(){
//     int x=3;
//     int y=5;
//     cout<<endl<<"the original x :  "<<x<<endl;
//     cout<<endl<<"the original y :  "<<y<<endl<<endl;
//     switch_num(&x,&y);
//     cout<<endl<<"the current x :  "<<x<<endl;
//     cout<<endl<<"the current y :  "<<y<<endl;
//     return 0;
// }

