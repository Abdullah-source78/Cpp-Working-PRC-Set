#include <iostream>
using namespace std;

void myFunction(){
//    cout << "My name is Titu" << endl;
    cout<<"Enter the Number of the PyramiusS ;";
    int n;

    cin>>n;
   for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= i; ++j) {
         cout << j;
      }
      cout << endl;
   }  
}

int main()
{
    // myFunction();
    // cout << "Hello World;" << endl;
    // myFunction();
    // cout << "Hello Thenaku;" << endl;
}