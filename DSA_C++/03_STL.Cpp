// 01: Basic Functions
#include<bits/stdc++.h>
using namespace std;

void print() {
    cout << "raj";
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    print();
    int s = sum(1, 5);
    cout << s; // prints 6
    return 0;
}

// 02: Pairs
#include <iostream>
#include <utility> // for pair
using namespace std;

void explainPair() {
    pair<int, int> p = make_pair(1, 3);
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> nested_p = make_pair(1, make_pair(3, 4));
    cout << nested_p.first << " " << nested_p.second.second << " " << nested_p.second.first << endl;

    pair<int, int> arr[] = {make_pair(1, 2), make_pair(2, 5), make_pair(5, 1)};
    cout << arr[1].second << endl; // prints 5
}

int main() {
    explainPair();
    return 0;
}

// 03: Vector Basics and Initialization
#include <iostream>
#include <vector>
using namespace std;

void explainVector() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    vector<pair<int, int>> vec;
    vec.push_back(make_pair(1, 2));

    vector<int> v1(5, 200);
    vector<int> v2(5);
    vector<int> v3(5, 20);
    vector<int> v4(v3);

    vector<int>::iterator it = v.begin();
    it++;
    cout << *it << " ";
}

int main() {
    explainVector();
    return 0;
}

// 04: Vector Iterators
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    it = it + 2;
    cout << *(it) << " ";

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    return 0;
}

// 05: Vector Erase
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 12, 23, 35};

    cout << v[0] << " " << v.at(0) << " ";
    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    for (auto element : v) {
        cout << element << " ";
    }

    v.erase(v.begin() + 1);
    v.erase(v.begin() + 2, v.begin() + 4);

    return 0;
}

// 06: Vector Insert, Pop, Swap
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 12, 23};

    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    v.erase(v.begin() + 1);
    v.push_back(35);
    v.erase(v.begin() + 2, v.begin() + 4);

    vector<int> v2(2, 100);
    v2.insert(v2.begin(), 300);
    v2.insert(v2.begin() + 1, 2, 10);

    vector<int> copy(2, 50);
    v2.insert(v2.begin(), copy.begin(), copy.end());
    cout << "Size: " << v2.size() << endl;

    vector<int> v3 = {10, 20};
    v3.pop_back();

    vector<int> v1 = {10, 20};
    vector<int> v4 = {30, 40};
    v1.swap(v4);

    return 0;
}

// 07: List and Deque
#include <iostream>
#include <list>
#include <deque>
using namespace std;

void explainList() {
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(3);
}

void explainDeque() {
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.emplace_back(3);
    dq.emplace_front(4);
}

int main() {
    explainList();
    explainDeque();
    return 0;
}

// 08: Advanced Vector Insertion and Clear
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(2, 100);
    v.insert(v.begin(), 300);
    v.insert(v.begin() + 1, 2, 10);

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());

    vector<int> v2 = {10, 20};
    cout << "Size: " << v2.size() << endl;
    v2.pop_back();

    vector<int> v1 = {10, 20};
    vector<int> v3 = {30, 40};
    v1.swap(v3);

    v.clear();
    cout << "Is empty: " << v.empty() << endl;

    return 0;
}