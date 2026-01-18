#include <iostream>
using namespace std;
int main() {
    int num=10;//this is a integer vairable
    int * p;//declare an integer pointer vairable
    cout<<"the memory address of the pointer variable is:"<<&p<<endl;//output the memmory address of the integer vairable
    p=&num;//assign the value of the pointer and the value is the memory address of the original integer variable
    cout<<"the memory address of the number is:"<<p<<endl;
    //对内存的操作 通过指针的作用
    *p=12;
    cout<<num<<" and "<<*p<<endl;
    return 0;

}