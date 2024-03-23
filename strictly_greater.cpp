#include<bits/stdc++.h>
using namespace std;
bool xisgraterthan(vector<int> &arr,int n,int p){
    for(int i=0; i<n; i++){
        if(arr[i]>p){
            cout << arr[i] << " ";
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    };
    vector<int> m;
    int p; 
    cin >> p;
    m.push_back(p);
    xisgraterthan(arr, n,p);
  

}