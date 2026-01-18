#include <iostream>
#include <string>
using namespace std;

//此时结构体和函数是分开的
// struct Clock
// {
//     double length;
//     double width;
//     double height;
// };

// void clocking(int &frequency,int &duration){
//     cout <<endl<<"[响铃中] 频率: " << frequency << " 时长: " << duration << endl;
//     cout <<endl;
//     //这里在函数内部的嵌套函数beep不需要&freequency引用变量
//     //引用变量只需要在main和 clockring函数之间绑定在一起时需要
// }
// int main(){
//     struct Clock ac={1.11,2.22,3.33};//类型是double不是string
//     int x=300;
//     int y=10;
//     clocking(x,y);
//     return 0;
// }


//然后写一个用class将object的attribute和method结合在一起的叫做class
class AlarmClock
{
public:
    double height;
    double width;
    double length;
    void clock_ring(int frequency,int duration){
        cout<<endl<<"频率是:    "<<frequency<<"   持续时间是:    "<<duration<<endl;
    }
    void say_hi(){
        cout<<endl<<"我的长度是:    "<<length<<"我的宽度是:    "<<width<<"我的高度是:    "<<height<<endl;
    }
};
int main(){
    class AlarmClock ac1={1.11,2.12,3.13};
    //两种方法等效
    // class AlarmClock ac1;
    // ac1.length=1.11;
    // ac1.width=2.12;
    // ac1.height=3.13;

    cout<<endl<<"长度:    "<<ac1.length<<endl;
    cout<<endl<<"宽度:    "<<ac1.width<<endl;
    cout<<endl<<"高度:    "<<ac1.height<<endl;
    ac1.clock_ring(300,10);
    ac1.say_hi();
    class AlarmClock ac2={1.21,2.22,3.23};
    cout<<endl<<"长度:    "<<ac2.length<<endl;
    cout<<endl<<"宽度:    "<<ac2.width<<endl;
    cout<<endl<<"高度:    "<<ac2.height<<endl;
    ac2.clock_ring(400,20);
    ac2.say_hi();
    return 0;
}