 #include<iostream>
 using namespace std;

void selection_sort(int arr[],int n){
    //int min=0;
    int i,j,k;
    for(int i=0;i<n-1;i++){
        int min=i;
      for(int j=i+1;j<n;j++){
         if(arr[min]>arr[j]){
            min=j;
         }
      }
      swap(arr[min],arr[i]);
    }
    cout<<"Sorted array : ";
     for(int k=0;k<n;k++){
      cout<<arr[k];
     }
}

 int main(){
   int arr[5]={5,4,2,6,1};
   int n=5;
   selection_sort(arr,n);
 }
