#include<iostream>

int reverseNum(int num){
    bool isNegative = num < 0;
    num = abs(num);

    int rem = 0;
    while (num > 0) {
        rem = rem * 10 + num % 10;
        num /= 10;
    }

    return isNegative ? -rem : rem;
}

int main(){

    std::cout << reverseNum(-321) << std::endl;
    return 0;
}