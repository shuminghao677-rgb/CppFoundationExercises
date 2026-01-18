#include <iostream>
using namespace std;
//让引用变量作为形参 当调用switch_num函数的时候相当于
//int &a = x int &b = y 所以ab都可以对xy进行更改 所以两个函数之间双向可以发生交换
void switch_num(int &a,int &b){
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}
int main(){
    int x=3;
    int y=4;
    cout<<endl<<"x1:  "<<x<<endl;
    cout<<endl<<"y1:  "<<y<<endl;
    switch_num(x,y);
    cout<<endl<<"x2:  "<<x<<endl;
    cout<<endl<<"y2:  "<<y<<endl;
    return 0;
}