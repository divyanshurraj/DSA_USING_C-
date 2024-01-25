 #include<iostream>
 using namespace std;
 void bubble_sort(int arr[],int n){
    for(int l=0;l<n-1;l++){
       for(int j=0;j<n-1-l;j++){
          
         if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
          }
    }
    }
    cout<<"Sorted array : ";
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" " ;
    }
     
 }
 int main(){
    int s;
    cout<<"Enter the number elements to enter : ";
    cin>>s; 
    int arr[s];
    for(int a =0;a<s;a++){
        cout<<"Enter the element no. "<<a+1<<" : ";
        cin>>arr[a];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
 }
