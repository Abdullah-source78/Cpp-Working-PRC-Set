#include <iostream>
using namespace std;

void Factfun(int x){

    int fact =1;
    for(int i=1;i<=x;i++){
        fact *= i;
    }

    cout<<"From void ;";  
    cout<<"Factorial is "<<fact<<endl;  

}
void Getdata(int x){
    cout<<"from getdata() ;";
    cout<<"Enter number between 1-9 = ";
    cin>>x;
}


int main()
{
    int N;
    cout<<"From main ;";
    
    Getdata(N);
    Factfun(N); 
    return 0;
}