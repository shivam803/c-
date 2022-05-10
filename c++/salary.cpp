#include<iostream>
using namespace std;

int main(){
    int salary,year;
    cout<<"Enter Your Salary?"<<endl;
    cin>>salary;
    cout<<"Enter your years of service?"<<endl;
    cin>>year;
    
    if (year > 5){
        cout <<"The total salary increased by 5%  is "<< salary+(salary*.05) <<endl;
    }
    else{
        cout<<"your are less then 5yrs service "<<salary <<endl;
    }
}
