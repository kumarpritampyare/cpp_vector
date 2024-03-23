#include <iostream>
#include <vector>
using namespace std;
int facto(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

vector<int> storeinarray(int fact) {
    int n = fact;
    int i = 0;
    for (i = 0; n != 0; i++) {
        n /= 10;
    }

vector<int> arr(i);
    for (int j = i - 1; j >= 0; j--) {
        int temp = fact % 10;
        arr[j] = temp;
        fact /= 10;
    }
    return arr;
}

int main() {
    int fact = facto(7);
vector<int> result = storeinarray(fact);

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << std::endl;

    return 0;
}
