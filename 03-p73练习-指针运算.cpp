#include <iostream>
using namespace std;

int main(){
//     int num=3;
//     int * p1 =&num;
//     cout<<endl<<"original p1"<<p1<<endl;
//     p1++;
//     cout<<endl<<"new p1"<<p1<<endl;
// //sizeof(int)==4 所以在运算加1之后 内存地址加4
//     char letter='a';
//     char * p2=&letter;
//     cout<<endl<<"original p2"<<(void*)p2<<endl;
//     p2+=4;
//     cout<<endl<<"new p2"<<(void*)p2<<endl;
// //sizeof(char)==1 所以在运算加1之后 内存地址加1
// //特殊这里 关于输出char的指针的时候 需要在前面加上(void*)p2 才能成功cout
//     double num1=3.14;
//     double * p3=&num1;
//     cout<<endl<<"original p3"<<p3<<endl;
//     p3++;
//     cout<<endl<<"new p3"<<p3<<endl;
//sizeof(double)==8 所以在运算加1之后 内存地址加8
    int v[]={1,3,4,2};
    int * vp=v;
    cout<<endl<<vp<<"   "<<v<<endl;
    cout<<endl<<*vp<<"   "<<v[0]<<endl;
    cout<<endl<<*(vp+1)<<"   "<<v[1]<<endl;
//这里指针加1的时候正好就是下一个元素 因为数组是连续的四个字节为一个整数
    cout<<endl<<*(vp+2)<<"   "<<v[2]<<endl;
//依次 这里*(vp+2)指针加2 相当于也是运算 就是数组的第二个元素
    return 0;
}

