#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    const int Length = 5;
    int arr[Length];
    for (int i = 0; i < Length; i++)
    {
        cout<<"Enter value at "<<i<<" index :" ;
        cin>>arr[i];
    }
    cout<<endl<<endl;

    cout<<"Bubble sorting..........."<<endl;

    cout<<endl<<endl;
    for (int i = 0; i < Length-1; i++)
    {
        for (int j = 0; j < Length-1-i; j++)
        {
            if (arr[j] % 2 == 1 && arr[j + 1] % 2 == 0) {
                swap(arr[j], arr[j + 1]);
            }
            // Condition to sort even numbers and odd numbers separately
            // else if (arr[j] % 2 == arr[j + 1] % 2 && arr[j] > arr[j + 1]) {
            //     swap(arr[j], arr[j + 1]);
            // }

        }
        
    }

    // cout<<"SElecr=tion sorting..........."<<endl;
    // cout<<endl<<endl;
    // for (int i = 0; i < Length-1; i++)
    // {
    //     int minIndex = i;
    //     for (int j = i+1; j < Length; j++)
    //     {
            
    //         if(arr[j] >arr[minIndex]){
    //             minIndex = j;
    //         }

    //     }
    //     swap(arr[i],arr[minIndex]);
        
    // }



    
    for (int i = 0; i < Length; i++)
    {
        cout<<" value at "<<i<<" index  is :"<<arr[i] <<endl;
    
    }
}