#include <iostream>

void swap(int* tmp1, int* tmp2){
    int tmp = *tmp1;
    *tmp1 = *tmp2;
    *tmp2 = tmp;
}

int main(void){
    int a = 3;
    int b = 10;
    swap(&a, &b);
    std::cout<<a<<b<<std::endl;
    return 0;
}