#include<bits/stdc++.h>

using namespace std;
/* int maxhamming(vector<int>arr,int n){
    vector<int> arr_copy(n);
    int count;
    int temp= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]!= arr[i+1]){
            arr_copy[i]=arr[i+1];
            count++;
        }else{
            while(arr[i]==arr[i+1]){
                i++;
                count++;
                vector<int>arr3 ;
            }
            arr_copy[i-count]= arr[i];
        }
        
    }
    
    return count;
}
*/

int printhamming(int arr[],int n){
    std::set<int> s ;
    for(int i=0;i<=n-1;i++){
        s.insert(arr[i]);
    }
    return s.size();
}
void printarr(set<int> s,int n){
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
}
int main(){
    int arr[]={1,4,1};
    cout<< printhamming(arr,3);
   
    return 0;
}