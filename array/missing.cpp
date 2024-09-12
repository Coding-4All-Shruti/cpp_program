#include<iostream>
using namespace std;

int main(){
    int i , ans;
    int sum=0;
    int arr[5] = {1,2,3,4,6};
    int n= sizeof(arr[0])+1;

    for(i=0;i<n-1;i++){
        sum=sum+arr[i];
    }

    ans = n*(n+1)/2;

    int missing = ans - sum;

    cout<<missing<<endl;

    return 0;
}