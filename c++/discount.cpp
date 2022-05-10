#include<iostream>
using namespace std;
 int main(){
     int quantity ,price;
     cout<<"enter how much unit you want ? ";
     cin>>quantity;
    
    price = 1000 * quantity;

     if (price > 1000)
     {
         cout << "Total cost is " << 1000-(price * .1)<< endl;
     }
     else{
         cout << "cost without discount is " << price << endl;
     }
     

     return 0;
 }