#include <iostream>

int main(){
    std::cout<<"Palindrome Check."<<std::endl;
    
    int number = 123, temp, t = 0, b, palindrome = 0, h;

    for(int i = 0; i < number; i++){
        temp = number % 10;
        b += temp;
        h = b * 10;
        palindrome = h;
        h = number / 10;
        number = h;
        b = 0;
    }

    std::cout<<"The Palindrome of the value is "<<palindrome<<"."<<std::endl;
}
