#include<iostream>
using namespace std;
int main(){
    const int SIZE = 5;
    int arr[SIZE]={23,4,-2,6,66}
    for(int i= 0;i<SIZE;i++){
        cout<<"Values at "<<i<<" index is "<<arr[i]<<endl;

    }
    for (int j=i+1;j<SIZE-1;j++){
        
    }
    int key ;
    int found = -1;
    cout<<"enter key "<<endl;
    cin>>key;
   
    int low =0,high=SIZE-1,mid;
    while(low<=high){
        mid = (low+high)/2
    }
    if(arr[mid]==key){
        fond=mid;
        break;

    }
    else if(arr[mid]<key){
        low = mid =1;

    }else{
        high= mid -1;
    }
    if(found == -1){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"found at "<<found;
    }
}