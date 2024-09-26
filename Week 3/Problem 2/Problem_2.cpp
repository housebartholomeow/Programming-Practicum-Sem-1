#include <iostream>
using namespace std;

int main(){
    double numbawan, numbatu, numbatree;
    
    cout<<"Please input first number."<<endl;
    cin>>numbawan;
    
    cout<<"Please input second number."<<endl;
    cin>>numbatu;
    
    cout<<"Please input third number."<<endl;
    cin>>numbatree;
    
    cout<<"The highest number is ";

    if(numbawan > numbatu && numbawan > numbatree){
        cout<<numbawan;
    }
    else if(numbatu > numbawan && numbatu > numbatree){
        cout<<numbatu;
    }
    else{
        cout<<numbatree;
    }
    cout<<".";
}
