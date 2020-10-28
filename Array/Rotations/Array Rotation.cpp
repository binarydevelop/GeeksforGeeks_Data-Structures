/* Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
        Test 1:
            arr[] = { 1, 2, 3, 4, 5, 6, 7 }  d= 7 n=2
            output:
                    3 4 5 6 7 1 2
                    
        Test 2:
            arr[] = { 1, 2, 3, 4, 5 } d=5 n=2 
            output:
                    3 4 5 1 2
*/

#include<iostream>

using namespace std;
void rotate_one(int arr[], int n){
    //save the first item of array in curr_item
    int curr_item=  arr[0],i;
    //run the loop from starting till n-1 as curr_item will be saved at n
    for(i=0;i<n-1;i++){
        arr[i]= arr[i+1];
    }
    //saves the current_item at the end of the array
    arr[i]= curr_item;
}
void rotate(int arr[],int d,int n){
    //run the loop for d times to rotate it d times
    for(int i=0;i<d;i++){
        rotate_one(arr,n);
    }
}
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
        int arr[] = { 1, 2, 3, 4, 5 }; 
        int n = sizeof(arr) / sizeof(arr[0]); 
        rotate(arr,2,n);
        print_array(arr,n);
    return 0;
}