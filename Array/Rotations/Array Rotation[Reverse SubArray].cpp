/* This Program basically reverses the subarray and then joins them. The first part is upto [0 -> d] and then [d to n-1].*/
#include<bits/stdc++.h>

using namespace std;
void reverse(int arr[],int start,int end){
    int temp;
    while(start<end){
        temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void displayArray(int A[],int n)
{
 int i;
 for(i=0;i<n;i++)
  cout<<A[i]<<" ";
 cout<<"\n";
}
int main(){
     int arr[] = { 13,14,65,45,47832,7554,32 };
   int n = 7;
   int d = 2;
   printf("The initial array is :\n");
   for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);
   reverse(arr, 0, d - 1);
   reverse(arr, d, n - 1);
   reverse(arr, 0, n - 1);
   printf("\nThe left reversed array by %d elements is:\n",d);
   for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);
   return 0;
}