#include<iostream>

using namespace std;

int main()
{
  int ch;
  double num1, num2;
  
  do
  {
    cout<<"         ---CALCULATOR---       "<<endl;
    cout<<"Press 1 to perform Addition"<<endl;
    cout<<"Press 2 to perform Subtraction"<<endl;
    cout<<"Press 3 to perform Multiplication"<<endl;
    cout<<"Press 4 to perform Division"<<endl;
    cout<<"Press 5 to exit"<<endl;
    
    
    
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    
    switch(ch)
    {
        case 1:cout<<"Enter two numbers: "<<endl;
               cin>>num1>>num2;
        cout<<num1<<"+"<<num2<<"="<< num1+num2<<endl; break;
        
        case 2:cout<<"Enter two numbers: "<<endl;
               cin>>num1>>num2;
        cout<<num1<<"-"<<num2<<"="<< num1-num2<<endl; break;
        
        case 3:cout<<"Enter two numbers: "<<endl;
               cin>>num1>>num2;
        cout<<num1<<"*"<<num2<<"="<< num1*num2<<endl; break;
        
        case 4:cout<<"Enter two numbers: "<<endl;
               cin>>num1>>num2;
              if(num2!=0)
              {
                cout<<num1<<"/"<<num2<<"="<< num1/num2<<endl; break;
              }
              else
              {
                  cout<<"Denominator can't be zero"<<endl;
              }
        case 5: break;
        default: cout<<"Invalid choice, please try again \n";
    }
  }
  while(ch!=5);
 
}