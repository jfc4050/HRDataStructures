//
// Created by Justin Chiu on 9/12/17.
//

#include <vector>
#include <iostream>
#include <deque>

using namespace std;

vector <int> leftRotation(vector <int> &arr, int leftRot) {

    //declare and populate deque
    deque<int> deq;
    for (int i : arr) {
        deq.push_back(i);
    }

    //perform specified number of left rotations
    while (leftRot--){
        deq.push_back(deq.front());
        deq.pop_front();
    }

    //overwrite input vector
    arr.clear();
    for (int i : deq) {
        arr.push_back(i);
    }

    return arr;
}

int main() {
    int arrLen, leftRot;
    cin >> arrLen
        >> leftRot;
    vector<int> arr(arrLen);

    for(int i = 0; i < arrLen; ++i){
        cin >> arr[i];
    }

    vector <int> result = leftRotation(arr, leftRot);

    for (auto iter = result.begin() ; iter != result.end() ; ++iter) {
        cout << *iter
             << (iter != result.end() - 1 ? " " : "");
    }
    cout << endl;

    return 0;
}

