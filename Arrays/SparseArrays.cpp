//
// Created by Justin Chiu on 9/12/17.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int strings;
    cin >> strings;

    //declare and populate listStrings
    vector<string> listStrings {};
    while (strings--) {
        string stringIn;
        cin >> stringIn;
        listStrings.push_back(move(stringIn));
    }

    int queries;
    cin >> queries;
    while (queries--) {
        string query;
        cin >> query;
        int counter = 0;
        for (const string &str : listStrings) {
            if (str == query) {
                counter += 1;
            }
        }
        cout << counter << endl;

    }

    return 0;
}