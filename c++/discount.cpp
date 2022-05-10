// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.

#include<iostream>
using namespace std;
 int main(){
     int quantity ,price;
     cout<<"enter how much unit you want ? ";
     cin>>quantity;
    
    price = 100 * quantity; //1unit = 100

     if (price > 1000)
     {
         cout << "Total cost is " << price-(price * .1)<< endl; //
     }
     else{
         cout << "cost without discount is " << price << endl;
     }
     

     return 0;
 }
