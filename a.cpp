#include <iostream>
using namespace std;
void max_no(int arr[], int Size, int & largest,int & smallest )
{
largest = arr[0];
smallest = arr[0];
        for(int i=1; i<Size;i++){

    largest = max(arr[i], largest);
    smallest = min(arr[i], smallest);
        }
        }

int main()
{
    const int Size = 10;
    int arr[Size] = {23, 56, -100, 1, 11, 45, 99, 86, -1, 77};
    int largest, smallest;

    max_no(arr, Size, largest, smallest);
    cout << "Largest value is = " << largest << endl;
    cout << "Smallest value is = " << smallest << endl;
    return 0;
}