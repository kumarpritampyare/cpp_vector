#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool sortelement(vector<int> &arr, int n){
        sort(arr.begin(),arr.end());
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    sortelement(arr, n);
    cout << arr[n-3];
}