#include<iostream>
#include<vector>
using namespace std;
void differenceofevenoddsum(vector<int> &v, int n){
     int sume =0;
     int sumo =0;
     for(int i=0; i<n; i++){
         if(i%2==0){
             sume=sume+ v[i];
         }
         else{
             sumo = sumo + v[i];
         }
     }
     cout << sumo-sume;
}
int main(){
    int n; 
    cin >> n; 
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    differenceofevenoddsum(v,n);
    return 0;
}