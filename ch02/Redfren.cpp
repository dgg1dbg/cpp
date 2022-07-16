#include <iostream>
using namespace std;

int main(void){
    int num = 10;
    int &num1 = num;
    num1++;
    cout<<num<<endl;
    return 0;
}

//참조자는 선언됨과 동시에 변수 또는 참조자를 참조해야만 한다.