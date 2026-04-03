#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    int i,j,minidx;
    for(i=0;i<n-1;i++){
        minidx=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        }
        int temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    cout<<"Enter the size of arrray : "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of arrray : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionsort(arr,n);

    return 0;
}