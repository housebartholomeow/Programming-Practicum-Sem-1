#include <iostream>
using namespace std;

int main (){
    int i;
    int j;
    int k;

   j = 1;
    k = 0;

    cout<<"Please input amount of natural numbers that will be summed up."<<endl;
    cin>>i;

    cout<<'\n';

    cout<<"Input = "<<i<<'\n';

    cout<<"Output = ";

 
    while(j <= i){
        cout<<j;
        k += j;
        j++;
        if(j <= i){
            cout<<" + ";
        }
    }
    
    cout<<" = "<<k<<'\n';
}
