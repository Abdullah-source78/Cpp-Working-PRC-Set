// for help
#include <iostream>
using namespace std;
/// passing array and its size to the user define function
void getarray(int a[], int S)

{
    cout<<"From void ;"<<endl;
    for(int i= 0; i<S; i++)
    {
        cout<<"Enter value at "<<i<<" index ";
        cin>>a[i];
    }
}
void showarry(int a[], int s){
    cout<<"From main ;"<<endl;

    for(int i= 0; i<s; i++)
    {
        cout<<"Value at "<<i<<" index is "<<a[i]<<endl;
    }
}

int main()
{
    const int SIZE = 5;
    int arr[SIZE];

    getarray(arr, SIZE);
    showarry(arr,SIZE);

    cout<<endl<<endl;
    

    return 0;
}