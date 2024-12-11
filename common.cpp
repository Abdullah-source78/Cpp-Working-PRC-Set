#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int arr1[SIZE] = {1, 2, 3, 4, 5};
    int arr2[SIZE] = {3, 4, 5, 6, 7};

    int common[SIZE];  
    int commonIndex =0;
    
    for(int i=1;i<SIZE;i++){
        for(int j=1;j<SIZE;j++){
            if(arr1[i]==arr2[j]){
                common[commonIndex]=arr1[i];
                commonIndex++;
                break;

            }
        }
    }


    cout <<"\nCommon elements are : ";
    for (int i = 0; i < commonIndex; i++)
    {
        cout << common[i] <<" ";
    }
    return 0;
}
