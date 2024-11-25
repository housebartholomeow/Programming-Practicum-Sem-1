#include <iostream>

int main(){
    int array[] = {1, 43, 3, 4, 5, 6, 7, 8, 9, 10, 54, 57, 67, 88, 80, 86, 76}, odd = 0, even = 0;
    int datasize = sizeof(array)/sizeof(array[0]);

    for(int i = 0; i < datasize; i++){
        if(array[i] % 2 == 1){
            odd++;
        }
        else{
            even++;
        }
    }

    std::cout<<"The amount of odd numbers in the array is "<<odd<<", and the amount of even numbers in the array is "<<even<<"."<<std::endl;
}
