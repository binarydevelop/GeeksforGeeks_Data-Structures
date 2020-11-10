#include<bits/stdc++.h>
using namespace std;
int findminimum(int arr[],int n){
    //find pivot
    int i;
    int min;
for(i=0;i<n;i++){
    if(arr[i+1]<arr[i]){
        break;
    }
}
 min= (arr[i+1]<arr[n-1])?arr[i+1]:arr[n-1];
    if(arr[0]<min){
        min=arr[0];
    }
return min;
}
int main(){
    int arr[]= {10,20, 30, 40, 50, 5, 7};
    cout<<findminimum(arr,7);
    return 0;
}