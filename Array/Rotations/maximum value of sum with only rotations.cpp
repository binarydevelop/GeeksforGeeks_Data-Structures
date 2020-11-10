#include<bits/stdc++.h>

using namespace std;
void rotate(int arr[], int n) 
{ 
	int x = arr[0], i; 
	for (i = 0; i < n-1; i++) 
	arr[i] = arr[i + 1]; 
	arr[n-1] = x; 
} 

int maxvalueofsum(int arr[],int n){
    //find pivot
    int i; 
    for (i=0; i<n-1; i++)               
        if (arr[i] > arr[i+1]){ 
            break; }
    int no_of_rotations = i+1; //i rotations to bring it to 0 and i+1 to bring ot to the last position
    for(int i=0;i<no_of_rotations;i++){
        rotate(arr,n);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= arr[i]*i;
    }
    return sum;
}
int main(){
    int arr[]={10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout<<maxvalueofsum(arr,10);
    return 0;
}