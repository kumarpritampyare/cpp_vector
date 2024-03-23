// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int> &v, int n){
//     int temp;
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         if(v[i]==0) i++;
//         if(v[j]==1) j--;
//         if(v[i]==1 && v[j]==0){
//             // temp = v[i];
//             // v[i] = v[j];
//             // v[j] = temp;
//             v[i] =0;
//             v[j] =1;
            
//         }
//         i++;
//         j--;
//     }

// }
// void display(vector<int> &v, int n){
//     for(int i=0; i<n; i++){
//         cout << v[i] <<" ";
//     }
// }
// int main(){
//     int n; 
//     cin >> n; 
//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//         cin >> v[i];
//     }
//     sort01(v,n);
//     display(v,n);
// }

#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int> &v , int n){
    int low =0;
    int mid =-0;
    int high = n-1;
    while(mid <=  high){
        if(v[mid] ==2) {
        int temp = v[mid];
        v[mid] = v[high];
        v[high] = temp;
        high--;
        }
        else if(v[mid] == 0){
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            low++;
            mid++;
        }
        else mid++;
    }
}
void display(vector<int> &v, int n){
    for(int i=0; i<n; i++){
        cout << v[i]<<" ";
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort012(v,n);
    display(v,n);
}
