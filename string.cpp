#include<iostream>
using namespace std;
int main(){
 string s=("Hello"); //string can only strore single word like "helloword",not "h","e"
 cout<<s<<endl;
 char ch[]={'a','b','c'};
 int arr[]={1,2,3};
 float arr1[]= {1.2,3.2,5.4};
 //printing characters
 for(int i=0;i<3;i++){
    cout<<ch[i]<<" "<<arr[i]<<" "<<arr1[i]<<endl;
 }

}
