#include <iostream>
using namespace std;

int num = 3;

namespace a{
    namespace b{
        namespace c{
            int num = 1;
        }
    }
}

int main(void){
    namespace abc = a::b::c;
    cout<<abc::num<<endl;
    int num = 2;
    ::num++;
    cout<<::num<<endl;

    return 0;
}