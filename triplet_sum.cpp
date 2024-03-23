#include<iostream>
#include<vector>
using namespace std;
int tripletsum(vector<int> &v, int n,int p){
    int count =0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(v[i]+v[j]+v[k] == p){
                    count++;
                }
            }
        }
        return count;
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int p;
    cin >> p;
    cout  << tripletsum(v, n , p);


}