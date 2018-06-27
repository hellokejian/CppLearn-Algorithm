#include <iostream>

using namespace std;

//void printMessage(string message) {
//    cout << "the message is:" + message + "\n";
////    printf("%s", message);
////    sprintf("%s", message);
////    return;
//}
//
class A{
    int i;
};
class B{
    A *p;
public:
    B(){p=new A;}
    ~B(){delete p;}
};
void sayHello(B b){
}
int main() {
//    cout << "Hello, World!" << std::endl;
//    cout << "Hello, World!\n";
//    printMessage("kejian is handsome");
//    B b;
//    sayHello(b);
//    return 0;
    bool first=true;
    int sum=0;
    int value = 0;
    unsigned short i=0xFFFF;
    for (;i>=0;--i)
    {
        if (first)
        {
            value=65536;
            sum+=value%3;
            first=false;
        }
        else{
            sum+=--value%3;
            if (value<=0)
            {
                cout<<sum<<","<<i << endl;
                break;
            }
        }
    }
    return 0;
}

