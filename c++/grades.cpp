    #include<iostream>
using namespace std;

int main(){
    int marks;
    cout<< "Enter your marks - "<<endl;
    cin>>marks;

    if (marks < 25){
        cout<<"F Grade" <<endl;
    }
    else if (marks >= 25 && marks < 45)
    {
        cout<<"E Grade" <<endl;
    }
    else if (marks >= 45 && marks <50)
   {
        cout<<"D Grade" <<endl;
    }
    else if (marks >=50 && marks < 60)
    {
        cout<<"C Grade" <<endl;
    }
    else if (marks >=60 && marks < 80){
        cout<<"B Grade" <<endl;
    }
     else if (marks >= 80 && marks<100)
     {
         cout<<"A-Grade" <<endl;
     }
     else{
         cout<<"Invalid Marks" <<endl;
     }
     
    
    
    


    return 0;
}
