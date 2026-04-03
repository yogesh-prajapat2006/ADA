#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={4,-2,3,-1,6};
    int n=arr.size();
    int csum=0;
    int msum=arr[0]; 
    for(int i=0;i<n;i++){
        csum+=arr[i];
        if(csum>msum){
            msum+=csum;
        }
        else if(csum<0){
            csum=0;
        }
        cout<<"csum ->"<<csum<<" "<<"msum ->"<<msum<<endl;
    }
    cout<<"maximumsum of sub array : "<<msum;
    return 0;
}
