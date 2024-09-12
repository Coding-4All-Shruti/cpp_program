#include<iostream>
using namespace std;

int main(){
    
     int i , ans=0;
     int arr[5]={1,2,6,4,5};
     for(i=0; i<5; i++){
         if(arr[i]>ans){
            ans=arr[i];
         }

     }
      cout<<ans;
    return 0;
}