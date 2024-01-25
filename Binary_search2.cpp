#include<iostream>
using namespace std;

int binary_search(int arr[],int k,int s,int e){
    int mid = s+(e-s)/2;
    if(mid>e){
        return -1;
    }
     if(arr[mid] == k){
        return mid;
     }
     else if(arr[mid]>k){
        binary_search(arr,k,s,mid-1);
         
     }
     else if(arr[mid]<k){
        binary_search(arr,k,mid+1,e);
        
     }
   
}

int main(){
    int arr[5]= {1,2,3,4,5};
    int k  ;
    cout<<"Enter the element to search : ";
    cin>>k;
    
    int size = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    int e = size-1;
    int result = binary_search(arr,k,s,e);
    if(result == -1){
        cout<<"Element is not found ! ";
    }
    else{
        cout<<"Element is found at index : "<<result;
    }
}
