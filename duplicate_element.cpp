#include<bits/stdc++.h>
using namespace std;
bool duplicate(vector<int> &arr, int n){
    for(int i=0;i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                return true;
            }
        }
        return false;
    }
    
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
     if(duplicate(arr,n)){
        cout << "have duplicate element" <<endl;
     }
     else{
        cout << "haven't duplicate element" <<endl;
     }
}