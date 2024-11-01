#include <iostream>

void factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    std::cout<<"The factorial of "<<n<<" is "<<result<<"."<<std::endl;
}

int main() {
    int input;
    std::cout<<"Please input a number."<<std::endl;
    std::cin>>input;

    factorial(input);
}
