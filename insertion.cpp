#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter no of elements : ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i,j,key;
    for(i=1; i<n ; i++){
        key = arr[i];
        j=i;
        while(arr[j-1]>key && j>=1){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=key;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}