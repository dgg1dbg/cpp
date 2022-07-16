#include <iostream>

namespace np1{
    void fun(void){
        std::cout<<"np1"<<std::endl;
    }
}

namespace np2{
    int num = 3;
    void fun(void);
}

int main(void){
    np1::fun();
    np2::fun();
    std::cout<<np2::num<<std::endl;
    return 0;
}

void np2::fun(void){
    std::cout<<"np2"<<std::endl;
    np1::fun();
}