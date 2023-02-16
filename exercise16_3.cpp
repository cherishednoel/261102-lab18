#include <iostream>
#include <vector>
using namespace std;

vector<float> removeNegatives(vector<float> v) {
    vector<float> result;
    for (int i = 0; i < v.size(); i++) {
        if(v[i] >= 0) {
            result.push_back(v[i]);
        }
    }
    return result;
}

int main() {
    vector<float> v;
    v.push_back(0.5);
    v.push_back(-2.0);
    v.push_back(-3.7);
    v.push_back(1.2);

    vector<float> result = removeNegatives(v);

    for(unsigned int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}