#include <iostream>
using namespace std;
int main(){
    // int * p1=NULL; null pointer
    int * p1=nullptr;

    int * p2;//wild pointer
    // int num =10;
    // p=&num;
    cout<<endl<<p1<<endl;
    cout<<endl<<p2<<endl;
    cout<<endl<<"hello world"<<endl<<endl;
    return 0;
}
// the output of the value of p1 is 0x0 initialized
// the output of the value of p2 is 0x16ddfa998 which is not initialized

// addition reminding: in C++ only exising one main function but embeded functions are allowed


