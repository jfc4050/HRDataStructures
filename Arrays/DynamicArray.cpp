//
// Created by Justin Chiu on 9/11/17.
//

#include <vector>
#include <iostream>

using namespace std;

int main() {
    size_t sequences, queries;
    cin >> sequences >> queries;

    vector< vector<int> > seqList(sequences, vector<int> ());

    int lastAnswer = 0;

    while (queries--) {
        int type, x, y;
        size_t index;
        cin >> type >> x >> y;

        index = (x^lastAnswer) % sequences;

        switch (type) {
            case 1:
                seqList[index].push_back(y);
                break;
            case 2:
                lastAnswer = seqList[index][y % seqList[index].size()];
                cout << lastAnswer << endl;
                break;
            default:
                cout << "invalid query type" << endl;
        }
    }

    return 0;
}