/*
Author: Eshan
Author URI: https://github.com/EshanLewis/
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream string_stream(str);
    vector<int> out;
    char ch;
    int t;
    while (string_stream >> t) {
        out.push_back(t);
        string_stream>>ch;
    }
    return out;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}