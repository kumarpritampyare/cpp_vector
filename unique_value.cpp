#include<iostream>
#include<vector>
using namespace std;
void uniquevalue(vector<int> &v, int  n){
    for(int i=0; i<n; i++){
        int count =0;
        for(int j=0; j<n; j++){
            if((v[i]==v[j]) &&(i!=j)){
                count++;
            }
        }
        if(count ==0){
            cout << v[i];
        }
    }
}
int main(){
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    uniquevalue(v, n);
}