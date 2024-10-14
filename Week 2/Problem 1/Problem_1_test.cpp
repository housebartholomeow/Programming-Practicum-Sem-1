#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string name1, name2, name3, name4, name5;
    double salary1, salary2, salary3, salary4, salary5, installment1, installment2, installment3, installment4, installment5, insurance1, insurance2, insurance3, insurance4, insurance5, tax1, tax2, tax3, tax4, tax5, net1, net2, net3, net4, net5, taxrate1, taxrate2, taxrate3, taxrate4, taxrate5;

    cout<<"Please help in running these tests."<<endl;
    cout<<endl;

    cout << "Please enter employee name" << endl;
    getline(cin, name1);

    cout << "Please enter 10000" << endl;
    cin >> salary1;

    cout << "Enter 10" << endl;
    cin >> taxrate1;

    cout << "Please enter 1000" << endl;
    cin >> installment1;

    cout << "Enter 500" << endl;
    cin >> insurance1;

    tax1 = taxrate1/100*salary1;
    net1 = salary1-tax1-installment1-insurance1;
    
    cout << " " << endl;
    cout << "calculating..." << endl;
    cout << " " << endl;
    cout << "preparing payslip..." << endl;    
    cout << " " << endl;

    cout << "Payslip for Employee" << endl;
    cout << "====================" << endl;
    cout << "Name: " << name1 << endl;
    cout << "Gross Salary: $" << salary1 << endl;
    cout << "Tax: $" << tax1 << endl;
    cout << "Installment: $" << installment1 << endl;
    cout << "Insurance: $" << insurance1 << endl;
    cout << "Net Salary: $" << net1 << endl;

    cout<<endl;

    cin.ignore();

    cout << "Please enter employee name" << endl;
    getline(cin, name2);

    cout << "Please enter 5000" << endl;
    cin >> salary2;

    cout << "Enter 50" << endl;
    cin >> taxrate2;

    cout << "Please enter 2000" << endl;
    cin >> installment2;

    cout << "Enter 499" << endl;
    cin >> insurance2;

    tax2 = taxrate2/100*salary2;
    net2 = salary2-tax2-installment2-insurance2;
    
    cout << " " << endl;
    cout << "calculating..." << endl;
    cout << " " << endl;
    cout << "preparing payslip..." << endl;    
    cout << " " << endl;

    cout << "Payslip for Employee" << endl;
    cout << "====================" << endl;
    cout << "Name: " << name2 << endl;
    cout << "Gross Salary: $" << salary2 << endl;
    cout << "Tax: $" << tax2 << endl;
    cout << "Installment: $" << installment2 << endl;
    cout << "Insurance: $" << insurance2 << endl;
    cout << "Net Salary: $" << net2 << endl;

    cout<<endl;

    cin.ignore();

    cout << "Please enter employee name" << endl;
    getline(cin, name3);

    cout << "Please enter 100000" << endl;
    cin >> salary3;

    cout << "Enter 1" << endl;
    cin >> taxrate3;

    cout << "Please enter 5" << endl;
    cin >> installment3;

    cout << "Enter 2" << endl;
    cin >> insurance3;

    tax3 = taxrate3/100*salary3;
    net3 = salary3-tax3-installment3-insurance3;
    
    cout << " " << endl;
    cout << "calculating..." << endl;
    cout << " " << endl;
    cout << "preparing payslip..." << endl;    
    cout << " " << endl;

    cout << "Payslip for Employee" << endl;
    cout << "====================" << endl;
    cout << "Name: " << name3 << endl;
    cout << "Gross Salary: $" << salary3 << endl;
    cout << "Tax: $" << tax3 << endl;
    cout << "Installment: $" << installment3 << endl;
    cout << "Insurance: $" << insurance3 << endl;
    cout << "Net Salary: $" << net3 << endl;

    cout<<endl;

    cin.ignore();

    cout << "Please enter employee name" << endl;
    getline(cin, name4);

    cout << "Please enter 50000" << endl;
    cin >> salary4;

    cout << "Enter 20" << endl;
    cin >> taxrate4;

    cout << "Please enter 15000" << endl;
    cin >> installment4;

    cout << "Enter 10000" << endl;
    cin >> insurance4;

    tax4 = taxrate4/100*salary4;
    net4 = salary4-tax4-installment4-insurance4;
    
    cout << " " << endl;
    cout << "calculating..." << endl;
    cout << " " << endl;
    cout << "preparing payslip..." << endl;    
    cout << " " << endl;

    cout << "Payslip for Employee" << endl;
    cout << "====================" << endl;
    cout << "Name: " << name4 << endl;
    cout << "Gross Salary: $" << salary4 << endl;
    cout << "Tax: $" << tax4 << endl;
    cout << "Installment: $" << installment4 << endl;
    cout << "Insurance: $" << insurance4 << endl;
    cout << "Net Salary: $" << net4 << endl;

    cout<<endl;

    cin.ignore();

    cout << "Please enter employee name" << endl;
    getline(cin, name5);

    cout << "Please enter 500" << endl;
    cin >> salary5;

    cout << "Enter 90" << endl;
    cin >> taxrate5;

    cout << "Please enter 10" << endl;
    cin >> installment5;

    cout << "Enter 20" << endl;
    cin >> insurance5;

    tax5 = taxrate5/100*salary5;
    net5 = salary5-tax5-installment5-insurance5;
    
    cout << " " << endl;
    cout << "calculating..." << endl;
    cout << " " << endl;
    cout << "preparing payslip..." << endl;    
    cout << " " << endl;

    cout << "Payslip for Employee" << endl;
    cout << "====================" << endl;
    cout << "Name: " << name5 << endl;
    cout << "Gross Salary: $" << salary5 << endl;
    cout << "Tax: $" << tax5 << endl;
    cout << "Installment: $" << installment5 << endl;
    cout << "Insurance: $" << insurance5 << endl;
    cout << "Net Salary: $" << net5 << endl;

    cout<<endl;

    cout<<"Results for the test cases are as follows."<<endl;

    cout<<endl;

 if(net1 == 7500){
    cout<<"Test 1 passed."<<endl;
 }   
 else{
    cout<<"Test 1 failed."<<endl;
 }

 if(net2 == 1){
    cout<<"Test 2 passed."<<endl;
 }
 else{
    cout<<"Test 2 failed."<<endl;
 }
 if(net3 == 98993){
    cout<<"Test 3 passed."<<endl;
 }
 else{
    cout<<"Test 3 failed."<<endl;
 }
 if(net4 == 15000){
    cout<<"Test 4 passed."<<endl;
 }
 else{
    cout<<"Test 4 failed."<<endl;
 }
 if(net5 == 20){
    cout<<"Test 5 passed."<<endl;
 }
 else{
    cout<<"Test 5 failed."<<endl;
 }
}
