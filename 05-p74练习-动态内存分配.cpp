#include <iostream>
using namespace std;
// int main(){
//     int * p=new int;
//     *p=10;
//     cout<<endl<<"p指针的内存地址是:"<<p<<endl;
//     cout<<endl<<"存放的值是:"<<*p<<endl;
//     delete p;
//     p=nullptr;
//     cout<<endl<<"经过delete后指针指向的地址"<<p<<endl<<endl;
//     //此时 p是一个null pointer 如果没有p=nullptr 那么delete p之后会变成一个 wild pointer
//     return 0;
// }

int main(){
    int *p_arr=new int[5];
    cout<<"数组的内存地址是:"<<p_arr<<endl;
    p_arr[0]=10;
    p_arr[1]=20;
    *(p_arr+2)=30;
    *(p_arr+3)=40;
    *(p_arr+4)=50;
    cout<<endl<<"第0个元素是:  "<<p_arr[0]<<endl;
    cout<<endl<<"第1个元素是:  "<<p_arr[1]<<endl;
    cout<<endl<<"第2个元素是:  "<<p_arr[2]<<endl;
    cout<<endl<<"第3个元素是:  "<<p_arr[3]<<endl;
    cout<<endl<<"第4个元素是:  "<<p_arr[4]<<endl;
    delete[] p_arr;
    //这里对于数组的delete后面要加[]中括号

    p_arr=nullptr;
    cout<<endl<<"现在指针存储的对应变量的内存地址是:  "<<p_arr<<endl<<endl;
    return 0;
}
