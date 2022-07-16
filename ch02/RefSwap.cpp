#include <iostream>
using namespace std;

void SwapByRef(int& ref1, int& ref2){
    int tmp = ref1;
    ref1 = ref2;
    ref2 = tmp;
}

int main(void){
    int num1 = 10;
    int num2 = 20;
    SwapByRef(num1, num2);
    cout<<num1<<"   "<<num2<<endl;
    return 0;
}

