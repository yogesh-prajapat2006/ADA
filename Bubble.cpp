#include<iostream>
using namespace std;

void Bubbleshort(int arr[],int size){
    int i,j,temp;
    for(int i=1;i<size-1;i++){//pass
        for(int j=0;j<size-1;j++){
            if(arr[j] > arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    for(int i=0;i<size;i++){
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

    Bubbleshort(arr,n);

    return 0;
}