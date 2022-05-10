#include<iostream>

using namespace std;

int main(){
    //cout<<"This is tutorial 9";
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if (age<18)
    {
        cout<<"underage";
    }
    else if (age==18)
    {
        cout<<"you are not a kid anymore";
    }
    
    else{
        cout<<"you are above 18";
    }
    if (age<0){
        cout<<"Enter a positive no";
    }
    
    return 0;

}