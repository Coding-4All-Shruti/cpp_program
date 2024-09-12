#include<iostream>
using namespace std;


int main(){
   
   int i,ans;
   int arr[5]={2,6,7,4,5};
   ans=arr[0];

   for(i=1; i<5; i++){
    if(arr[i]<ans){
        ans=arr[i];
    }
   }
   cout<<ans;

    return 0;
}