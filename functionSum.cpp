#include <iostream>
using namespace std;

void myFunction(int a,int b){
//    cout << "My name is Titu" << endl;
    // cout<<"Enter the Number of the PyramiusS ;";
    
    int sum = a+b;
    cout<<"The Sum is "<<sum;

   
}

int main()
{
    int a,b;
    cout << "Enter two numbers to calculate their sum: ";
    cin>>a>>b;

    myFunction(a,b);
    return 0;
}