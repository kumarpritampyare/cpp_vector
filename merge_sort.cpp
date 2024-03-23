#include<iostream>
#include<vector>
using namespace std;
vector<int> mergeSort(vector<int> &arr1,vector<int> &arr2){
        int n = arr1.size();
        int m  = arr1.size();
        int i=0;
        int j=0;
        int k=0;
        vector<int> ans(n+m);
        while(i<n && j<m){
            if(arr1[i] < arr2[j]){
                ans[k] = arr1[i];
                arr1[i]++;
                ans[k]++;
            }
            else{
                arr2[j]++;
                ans[k]++;
            }
        }
        if(i==n){
            while(j<m){
                ans[k] = arr2[j];
                arr2[j]++;
                ans[k]++;
            }
        }
        if(j<m){
            while(i<n){
                ans[k] = arr1[i];
                arr1[i]++;
                ans[k]++;
            }
        }
        return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr1(n);
    for(int i=0;  i<n; i++){
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    vector<int> arr2(m);
    for(int j=0;j<m; j++){
        cin >> arr2[j];
    }
    vector<int> ans = mergeSort(arr1,arr2);
    for(int i=0;i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    
}