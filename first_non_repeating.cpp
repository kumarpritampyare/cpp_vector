#include<iostream>
#include<vector>
using namespace std;
void nonRepeating(vector<int> &arr,int n){
    bool flag = false;
    for(int i=0; i<n; i++){
        int j;
        for(int j=0; j<n; j++){
            if(i!=j && arr[i] == arr[j]){
                break;
            }
            if(j==n){
                cout << arr[i];
                flag= true;
                break;
            }
        }
        if(!flag){
            cout <<"there is no non repeating  element in the array" <<endl;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[n];
    }
    nonRepeating(arr,n);
}