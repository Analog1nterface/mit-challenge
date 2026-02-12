#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 这里的两行代码能让你的 C++ 程序跑得飞快，CSP 必备技巧
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<string> plans;
    plans.push_back("1. Master Linux & Vim");
    plans.push_back("2. Finish MIT 6.004");
    plans.push_back("3. Score 300+ in CSP");

    cout << "MIT Challenge Day 1: System Online." << endl;
    cout << "Current Objectives:" << endl;

    for (const auto& plan : plans) {
        cout << plan << endl;
    }

    return 0;
}
