#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int> &v,int n){
    int noz =0;
    int noo =0;
    for(int i=0; i<n; i++){
        if(v[i]==0){
            noz++;
        }
        else{
            noo++;
        }
    }
    for(int i=0; i<n; i++){
        if(i<noz){
            v[i] =0;
        }
        else{
            v[i] =1;
        }
    }
}
void display(vector<int> &v, int n){
    for(int i=0; i<n; i++){
        cout << v[i] <<" ";
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort01(v,n);
    display(v,n);
}