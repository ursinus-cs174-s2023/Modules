#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, vector<int>> favNums;

    favNums.insert(pair<string, vector<int>>("chris", {174, 373, 476, 477}));
    favNums.insert(pair<string, vector<int>>("bill", {173, 374, 475}));
    favNums.insert(pair<string, vector<int>>("ann marie", {170, 274, 275}));

    string key = "chris";
    if (favNums.find(key) != favNums.end()) {
        vector<int> res = favNums[key];
        cout << key << " has the favorite numbers: ";
        for (size_t i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    else {
        cout << "Could not find key " << key << "\n";
    }
    return 0;
}