#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int number_for_multiplication_table;
    int number_in_the_loop_2;

    number_in_the_loop_2 = 1;
    
    
    cout<<"Please input number for multiplication table."<<'\n';
    cin>>number_for_multiplication_table;

    cout<<" "<<'\n';

    cout<<"Input: "<<number_for_multiplication_table<<'\n';

    cout<<"Output:";

    cout<<'\n';

    while(number_in_the_loop_2 <= 10){
        cout<<number_for_multiplication_table<<" x "<<number_in_the_loop_2<<" = "<<number_for_multiplication_table*number_in_the_loop_2<<'\n';
        number_in_the_loop_2++;
        }








}