#include<iostream>
using namespace std;

void Insirtionsort(int arr[],int n){
    int i,j,num;
    for(int i=1;i<n;i++){
        num=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>num){
                arr[j+1]=arr[j];
                arr[j]=num;
            }
            else{
                break;
            }
        }
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

    Insirtionsort(arr,n);

    return 0;
}