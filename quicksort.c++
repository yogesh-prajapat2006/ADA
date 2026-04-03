#include<iostream>
using namespace std;

int quick(int arr[],int l,int u){
    int i,j,pivote,temp;
    i=l+1;
    j=u;
    pivote=arr[l];
    while(i<=j){
        while(arr[i]<=pivote){
            i++;
        }
        while(arr[j]>pivote){
            j--;
        }
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    arr[l]=arr[j];
    arr[j]=pivote;
    return j;
}

void sort(int arr[],int l,int u){
    int z;
    if(l<u){
        z=quick(arr,l,u);
        sort(arr,l,z-1);
        sort(arr,z+1,u);
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
    sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}