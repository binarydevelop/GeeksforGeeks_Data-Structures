/*
            Input: arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
                      k = 3
            Output: 8 9 10 1 2 3 4 5 6 7 
*/
#include<bits/stdc++.h>

using namespace std;
void rightrotate(int arr[],int n){
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
void printarray(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}
void rotate(int arr[],int n,int k){
    for(int i=0;i<k;i++){
        rightrotate(arr,n);
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    rotate(arr,10,3);
    printarray(arr,10);
    return 0;
}