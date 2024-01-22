/**
 * Created by SHANTANU on 04-10-2023.
 * Topic - 
*/
#include <bits/stdc++.h>

#include <utility>

using namespace std;

class Solution {
private:

public:

};

struct StructSolution {
    string name;
    int age;

    void setInfo(string name, int age) {
        this->name = std::move(name);
        this->age = age;
    }

    void displayInfo() {
        cout << name << " " << age << endl;
    }
};//= {"s", 20};

int main() {
    static int vector;
    int *i = &vector;

//    cout << i << " " << *i;

//    s.setInfo("s", 20);
    struct StructSolution *solution = new StructSolution[8];
    solution[0].name = "shantanu";
    solution[0].age = 20;

    cout << solution->name << " " << solution->age;


    return 0;
}