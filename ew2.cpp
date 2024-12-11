/// for Guidline
#include <iostream>
using namespace std;
/// passing array and its size to the user define function
void getarray(int a[], int S)
{
    for(int i= 0; i<S; i++)
    {
        cout<<"Enter value at "<<i<<" index :";
        cin>>a[i];
    }
}
void showarray(int a[], int S)
{
    for(int i= 0; i<S; i++)
    {
        cout<<"Value at "<<i<<" index is :"<<a[i]<<"."<<endl;
    }

}
void BubbleSort(int a[], int S)
{
    for(int i=0;i<S-1;i++)
     {
        for(int j=0;j<S-1-i;j++){
           if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
}}
}
void SelectionSort(int a[], int S)
{
     for (int i = 0; i < S - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < S; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        
        swap(a[i], a[minIndex]);
    }
}
void get_small(int a[],int S){
    int min = a[0];
    int index;
    for(int i=0;i<S;i++){
        if(a[i]<min){
            min = a[i];
            index = i;
        }

    }
    cout<<"Mninmun Number is "<<min<<" at index "<<index;

}
void get_large(int a[],int S){
    int max = a[0];
    int index;
    for(int i=0;i<S;i++){
        if(a[i]>max){
            max = a[i];
            index = i;
        }

    }
    cout<<"Maximun Number is "<<max<<" at index "<<index;

}
void get_sum(int a,int b){
    cout<<"Enter two numbers :";
    cin>>a>>b;
    int sum = a+b;
    cout <<"Sum is "<<sum<<endl;
}
void subtract_func(int a,int b){
    cout<<"Enter two numbers :";
    cin>>a>>b;
    int sub = a-b;
    cout <<"subraction is "<<sub<<endl;
}
void multiply_func(int a,int b){
    cout<<"Enter two numbers :";
    cin>>a>>b;
    int mul = a*b;
    cout <<"product is "<<mul<<endl;
}
void divison_func(int a,int b){
    cout<<"Enter two numbers :";
    cin>>a>>b;
    int mul;
    if(b<=0){
        
        cout<<"Error!Zero is not divisible"<<endl;
        mul= 0;
    }else{
        mul = a/b;
    }
    
    cout <<"divioson is "<<mul<<endl;
}
int main()
{
    const int SIZE = 5;
    int arr[SIZE];
    int a,b;

    // getarray(arr, SIZE);

    // cout<<endl<<endl;
    // BubbleSort(arr, SIZE);

    // showarray(arr, SIZE);

    // cout<<endl<<endl;
    // SelectionSort(arr, SIZE);   

    // showarray(arr, SIZE);

    cout<<endl<<endl;
    get_small(arr, SIZE);
    cout<<endl<<endl;

    cout<<endl<<endl;
    get_large(arr, SIZE);
    cout<<endl<<endl;

    cout<<endl<<endl;
    get_sum(a, b);
    cout<<endl<<endl;


    return 0;
}