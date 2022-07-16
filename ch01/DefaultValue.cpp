#include <iostream>

int box(int l, int w=1, int h = 1);

int main(void){
    std::cout<<"[3, 3, D]: "<<box(3, 3)<<std::endl;
    return 0; 
}

int box(int l, int w, int h){
    return l * w * h;
}