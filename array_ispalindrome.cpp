#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispalindrome(vector<int> &v, int n){
    int start =0;
    int end =n-1;
    for(int i=0; i<n/2; i++){
        if(v[start] != v[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    bool is_palindrome = ispalindrome(v,n);
    cout << is_palindrome <<endl;
}
