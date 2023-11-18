#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream file("avg_rainfalltemp in UK.csv");

    vector<string> col4, col5;
    string line, word;

    while (getline(file, line)) {
        stringstream ss(line);

        for (int i = 0; i < 3; i++) {
            getline(ss, word, ',');
        }

        getline(ss, word, ',');
        col4.push_back(word);

        getline(ss, word, ',');
        col5.push_back(word);
    }

    for (int i = 0; i < col4.size(); i++) {
        cout << col4[i] << " " << col5[i] << endl;
    }

    return 0;
}