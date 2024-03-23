#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int> &arr, int n){
    int noo =0; 
    int noz =0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) noz++;
        else noo++;
    }
    for(int i=0; i<n; i++){
        if(i<noz) arr[i] =0;
        else arr[i] =1;
    }
}
void display(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort01(arr,n);
    display(arr,n);
}