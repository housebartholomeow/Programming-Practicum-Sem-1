#include <iostream>

long int gcd(long int a, long int b) {
    while (b != 0) {
        long int bruh = b;
        b=a%b;
        a=bruh;
    }
    return a;
}

int main() {
    int n, k;
    std::cout<<"Please enter numbers."<<std::endl;
    std::cin>>n>>k;

    long int result = gcd(n, k);
    std::cout<<"The GCD of the two numbers is "<<result<<"."<<std::endl;
}
