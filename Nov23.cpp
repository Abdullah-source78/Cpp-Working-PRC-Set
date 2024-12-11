#include<iostream>
using namespace std;

long long largestPrimeFactor(long long n) {
    long long largestFactor = -1;

    // Divide by 2 until n is odd
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }

    // Check for odd factors from 3 onwards
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }

    // If n is still greater than 2, it must be prime
    if (n > 2) {
        largestFactor = n;
    }

    return largestFactor;
}

int main (){
    
    int count =0;
    for (int i =1 ;i<=1000;i++){
        if(i%3==0 || i%5==0){
        
            if(i%3==0 && i%5==0){
                cout<<i<<" is mutiple of 3 and 5."<<endl; 
                
            }else if(i%3==0){
                cout<<i<<" is mutiple of 3."<<endl;
                
            }else{
                cout<<i<<" is mutiple of 5."<<endl;
                 
            }count++;
        }
        
    }
    cout<<"Total multiple are "<<count << " ."<<endl;
    long long number = 600851475143;
    cout << "The largest prime factor of " << number << " is: " << largestPrimeFactor(number) << endl;
    return 0;

}


