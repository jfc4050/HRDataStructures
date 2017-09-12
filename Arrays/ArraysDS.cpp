//
// Created by Justin Chiu on 9/10/17.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arrLen;
    cin >> arrLen;

    vector<int> arr(arrLen);
    vector<int>::iterator it;

    for(it = arr.begin() ; it != arr.end() ; it++){
        cin >> *it;
    }

    for(it = arr.end() - 1 ; it > arr.begin() - 1 ; it--) {
        cout << *it << " ";
    }
    return 0;
}

