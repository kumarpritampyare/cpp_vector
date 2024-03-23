#include<iostream>
#include<vector>
using namespace std;
void changingthevalue(vector<int> &v, int n){
    for(int i=0; i<n; i++){
        if(i%2==0){
            v[i] = v[i] *2;
        }
        else{
            v[i] = v[i] +10;
        }
    }
}
void display(vector<int> &v, int n){
    for(int i=0; i<n; i++){
        cout << v[i] << " "; 
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    changingthevalue(v,n);
    display(v,n);
}