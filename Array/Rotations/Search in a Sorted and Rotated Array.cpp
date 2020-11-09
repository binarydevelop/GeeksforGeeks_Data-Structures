#include<bits/stdc++.h>

using namespace std;
int binarysearch(int arr[],int low,int high,int key){
    if(high<low){return -1;}
   
    
    int mid= (low+high)/2;
    
    if(key==arr[mid]){
        return mid;
    }else if(key>arr[mid]){
        return  binarysearch(arr,(mid+1),high,key);
    }else if(key<arr[mid]){
        return binarysearch(arr,low,(mid-1),key);
    }
}

int findpivot(int arr[],int low ,int high){
    if(low>high){return -1;}
    
    int piv= (low + high)/2;
    
         while(arr[piv+1]>arr[piv]){
            piv+=1;
        }
        return piv+1;
       
}

int pivotedbinarysearch(int arr[],int n,int key){
    int pivot = findpivot(arr,0,n-1);
    if (pivot == -1) {
        return binarysearch(arr, 0, n - 1, key);
    }
    
     if (arr[pivot] == key) {
        return pivot; 
     }
     if(arr[0]<=key){
         return binarysearch(arr,0,pivot-1,key);
     }else if(arr[0]>key){
         return binarysearch(arr,pivot+1,n-1,key);
     }
}

int main(){
    int arr[]={30, 40, 50, 10, 20};
    cout<<pivotedbinarysearch(arr,5,10);
    
    return 0;
}