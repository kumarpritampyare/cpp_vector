#include<iostream>
#include<vector>
using namespace std;
void largestelement(vector<int> v, int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
}
void display(vector<int> v, int n){
    for(int i=0; i<n; i++){
        cout << v[i]<<" ";
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    largestelement(v,n);
    display(v,n);
    cout << v[n-1];
}