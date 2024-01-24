#include<iostream>
using namespace std;

int binary_search(int arr[],int s,int e,int k){
    //int s=0;
    //int e=size-1 ;
    int mid = s+(e-s)/2;
     
    while(e>=s){
        //int mid = s+(e-s)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            return binary_search(arr,s,mid-1,k);
        }
        else if(arr[mid]<k){
            return binary_search(arr,mid+1,e,k);
             
        }

        }
        return -1;
    }
     
     

 

int main(){
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  int k;
  cout<<"Enter the element to search : ";
  cin>>k;
  int size = sizeof(arr)/sizeof(arr[0]);
  int s=0;
  int e=size-1 ;
  int result = binary_search(arr,s,e,k);
  if(result==-1){
    cout<<"Element is not found";
  }
  else{
  cout<<"The element is found at index : "<<result;
  }
}
