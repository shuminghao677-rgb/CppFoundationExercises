#include <iostream>
using namespace std;
//第一版代码
// int main(){
//     int v1[]={1,2,3,4,5,6,7,8,9,10};
//     char v2[]={'a','b','c','d','e'};
//     for (int i=0;i<sizeof(v1)/sizeof(v1[0]);i++){
//         int * vp1=v1;
//         cout<<endl<<*(vp1+i)<<endl;
//     }
//     for (int j=0;j<sizeof(v2)/sizeof(v2[0]);j++){
//         char * vp2=v2;
//         cout<<endl<<*(vp2+j)<<endl;
//     }
//     return 0;
// }
//第二版代码
int main(){
    int v1[]={1,2,3,4,5,6,7,8,9,10};
    char v2[]={'a','b','c','d','e'};
    int * vp1=v1;
    int len1=sizeof(v1)/sizeof(v1[0]);
    cout<<"第一个数组遍历循环："<<endl;
    for (int i=0;i<len1;i++){
        cout<<*(vp1+i)<<endl;
    }
    char * vp2=v2;
    int len2=sizeof(v2)/sizeof(v2[0]);
    cout<<"第二个数组遍历循环："<<endl;
    for (int j=0;j<len2;j++){
        cout<<*(vp2+j)<<endl;
    }
    return 0;
}