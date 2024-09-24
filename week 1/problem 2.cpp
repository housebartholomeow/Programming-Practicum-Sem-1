#include <iostream>
using namespace std;

int main (){
    int amount_of_real_numbers_summed_up;
    int number_in_the_loop;
    int sum_of_real_numbers;

    number_in_the_loop = 1;
    sum_of_real_numbers = 0;

    cout<<"Please input amount of natural numbers that will be summed up."<<endl;
    cin>>amount_of_real_numbers_summed_up;

    cout<<'\n';

    cout<<"Input = "<<amount_of_real_numbers_summed_up<<'\n';

    cout<<"Output = ";

 
    while(number_in_the_loop <= amount_of_real_numbers_summed_up){
        cout<<number_in_the_loop;
        sum_of_real_numbers += number_in_the_loop;
        number_in_the_loop++;
        if(number_in_the_loop <= amount_of_real_numbers_summed_up){
            cout<<" + ";
        }
    }
    
    cout<<" = "<<sum_of_real_numbers<<'\n';
}
