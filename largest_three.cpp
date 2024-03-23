#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void largest_three(vector<int> &arr, int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for (int  i = 0; i < n; i++){
        if(arr[i] > max1){
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2){
            max3 = max2; 
            max2 = arr[i];
        }
        else if(arr[i] > max3){
            max3 = arr[i];
        }
    }
    if(max1==INT_MIN);
        else cout << max1 <<endl;
    if(max2==INT_MIN);
       else cout << max2<<endl;
    if(max3 == INT_MIN);
       else  cout << max3 <<endl;
    

}
int main(){
    int n; 
    cin >> n; 
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    largest_three(arr,n);
}