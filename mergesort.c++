#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int h){
    int m=mid-l+1;
    int n=h-mid;
    int a[m],b[n];
    for(int i=0;i<m;i++){
        a[i]=arr[l+i];
    }
    for(int j = 0; j < n; j++) {
        b[j] = arr[mid + 1 + j];
    }

    int i=0,j=0,k=l;
    while(i<m && j<n){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    for(;i<m;i++){
        arr[k++]=a[i];
    }
    for(;j<n;j++){
        arr[k++]=b[j];
    }
}

void mergesort(int arr[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h);
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
    int l=0,h=n-1;
    mergesort(arr,l,h);
    cout<<"sorted array.... :"<<endl;
    for(int i=l;i<=h;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}