#include<iostream> 
using namespace std; 
  

bool pairInSortedRotated(int arr[], int n, int x) 
{ 
    // Find the pivot element 
    int i; 
    for (i=0; i<n-1; i++)               // 18 here is the pivot as arr[i](68)>arr[i+1](18)
        if (arr[i] > arr[i+1]) // 20 43 68 18  
            break; 
    int l = (i+1)%n;  //mod n because if the value is less thhan n then it will return the same number else if it's greater than n then the remainder will be the result
    int r = i;        
   
    while (l != r) 
    { 
      
         if (arr[l] + arr[r] == x) 
              return true; 
  
         //  move to the higher sum 
         if (arr[l] + arr[r] < x) 
              l = (l + 1)%n; 
         else  // Move to the lower sum side 
              r = (n + r - 1)%n; // we are adding n because once r gets to 0 it will go to negative indexes but when we add n and %n it is confirmed that it will be in range of 0 to n-1 and hence not going out of the bound;
    } 
    return false; 
} 