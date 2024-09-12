#include<iostream>
using namespace std;

int main(){
    int i;
    
    int arr[5] = {1,2,3,4,5};
   //input array elem
   for(i=0; i<5; i++){
    cout<<arr[i];
   }

     //shift by one

    int last = arr[4];
    for(i=3; i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[0]=last;
    cout<<"  ";
    cout<<arr[i];
    

return 0;
}