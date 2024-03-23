#include<iostream>
#include<vector>
using namespace std;
void sortNegativePositive(vector<int> &v, int  n){
    int temp;
    for(int i=0; i<n; i++){
        if(v[i] > v[i+1]){
            temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;
        }
    }
}
void display(vector<int> &v,int n){
    for(int i=0; i<n; i++){
        cout << v[i]<<" ";
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i] ;

    }
    sortNegativePositive(v,n);
    display(v,n);

}