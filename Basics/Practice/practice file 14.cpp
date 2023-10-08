// Distribute in a circle
// https://www.interviewbit.com/problems/distribute-in-circle/

// Number of 1 bits
// https://practice.geeksforgeeks.org/problems/set-bits0143/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// Count set bits
// https://practice.geeksforgeeks.org/problems/set-bits0143/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// Bit Difference
// https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// Find 5 inbuilt function in c++ like min or max etc and write a code around
// them.

// Learn C++ from here and revise it on weekend

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <set>
using namespace std;
int main() {
    /*----------------------------1st----------------------------*/

    /*----------------------------2nd--------------------------*/

    /*----------------------------3rd-------------------------*/

    /*----------------------------4th-------------------------*/

    /*----------------------------5th-------------------------*/
// 1st vector
    vector<int> numbers1 = {1, 2, 3, 4, 5};
    numbers1.push_back(6);
    cout << "Element at index 2: " << numbers1[2] << endl;
    for (int num : numbers1) {
        cout << num << " ";
    }
    cout << endl;

// 2nd string
    string greeting = "Hello, ";
    string name = "Alice";
    string message = greeting + name;
    cout << "Message is: " << message << endl;
    cout << "Message length: " << message.length() << endl;

// 3rd sort
    vector<int> numbers2 = {5, 2, 8, 1, 9, 7, 6, 4, 3, 10};
    sort(numbers2.begin(), numbers2.end());
    for (int num : numbers2) {
        cout << num << " ";
    }
    int target = 8;
    auto it = find(numbers2.begin(), numbers2.end(), target);
    if (it != numbers2.end()) {
        cout << "Found " << target << " at position " << distance(numbers2.begin(), it);
    } else {
        cout << target << " not found in the vector.";
    }
    cout << endl;

// 4th pair
    pair<string, int> person("Alice", 25);
    cout << "Name: " << person.first << ", Age: " << person.second << endl;

// 5th set
    set<int> numbers3;
    numbers3.insert(5);
    numbers3.insert(2);
    numbers3.insert(8);
    numbers3.insert(1);
    numbers3.insert(4);
    numbers3.insert(3);
    numbers3.insert(6);
    numbers3.insert(7);
    // Iterating through a set
    for (int num : numbers3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}