#include<iostream>
#include<vector>
using namespace std;
void sortedOrNot(vector<int> &arr, int n){
    int i;
    for(i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            break;
        }
    }
    if(i == n-1) cout << "array is sorted"<<endl;
    else cout << "array is not sorted"<<endl; 
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sortedOrNot(arr, n);
}