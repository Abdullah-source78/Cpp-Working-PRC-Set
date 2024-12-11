#include<iostream>
using namespace std;

int main(){

    long long a =1;
    long long b = 2;
    int num ,count = 0;
    cout<<"Enter number of terms needed : ";
    cin>>num;
    cout << "Fibonacci Sequence up to 4000000 terms:" << endl;
    
    while(count<num){
        if(a%2==0){
            cout << a; 
            count++;
            if (count < num) {
                cout << " + "; 
            }else{
                cout<<".";
            }
        }    
        long long next_num = a+b;
        a=b;
        b=next_num;
     }
    cout << endl; 

}
