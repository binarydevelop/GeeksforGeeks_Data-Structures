#include<bits/stdc++.h>

using namespace std;

int countrotations(int arr[],int n){
   //find pivot
    int i; 
    for (i=0; i<n-1; i++)               
        if (arr[i] > arr[i+1]){ 
            break; }
    //i rotations to bring it to 0 and i+1 to bring ot to the last position
    
if((i+1)==n){return 0;}else{
    return i+1;
}
//this last condition is to make sure that if there is no rotation and index reaches the last elemnt we return 0
}
int main(){
    
    int arr[]={15, 18, 2, 3, 6, 12};
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<countrotations(arr,n);
    return 0;
}