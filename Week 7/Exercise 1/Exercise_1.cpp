#include <iostream>
#include <cmath>

int addition(int a, int b) {
    return a+b;
}

int difference(int c, int d){
    return std::abs(c-d);
}



int main(){
    int h;

    std::cout<<"Would you like to perform addition or difference? Type 0 for addition and 1 for difference."<<std::endl;

    std::cin>>h;

    if(h == 0){
        int n, l;
        std::cout<<"Please enter two numbers."<<std::endl;
        std::cin>>n>>l;
        std::cout<<"The sum of "<<n<<" and "<<l<<" is " << addition(n, l)<<"."<< std::endl;
    }
    else if (h == 1){
        int n, l;
        std::cout<<"Please enter two numbers."<<std::endl;
        std::cin>>n>>l;
        std::cout<<"The difference of "<<n<<" and "<<l<<" is " << difference(n, l)<<"."<< std::endl;
    }
    else{
        std::cout<<"Please input either 0  or 1."<<std::endl;
    }
}
