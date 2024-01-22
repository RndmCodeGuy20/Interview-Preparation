/**
 * Created by SHANTANU on 03-10-2023.
 * Topic - 
*/
#include <bits/stdc++.h>

#include <utility>

using namespace std;


class Base {
public:
    string name;
    int age;

    Base(string name, int age) {
        this->name = std::move(name);
        this->age = age;
    }

};

class BaseList : public Base {
private:
    static int listLength;
public:
    BaseList(string name, int age) : Base(std::move(name), age) {
//        listLength++;
    }

    int getLength() {
        return BaseList::listLength;
    }
};


int main() {
//    int i = 10;
//    bool b = true;
//    float f = 3.3;
//    double d = 3.333;
//    char c = 's';
//    auto a = 20;
//
////    float *p = &i;
//    void *v = reinterpret_cast<void *>(10);
//
//    cout << i << b << f << d << c << a;

    BaseList baseList[] = {BaseList("Shantanu", 21), BaseList("Pratik", 20)};

    BaseList *baseList1[] = {new BaseList("Shantanu", 20)};

    for (auto &item: baseList1) {
        printf("%s %d \n", item->name.c_str(), item->age);
    }

//    vector<Base> baseVector(3, Base("Shantanu", 20));
    vector<Base> *baseVector = new vector<Base>();
    baseVector->push_back({Base("s", 20)});
    baseVector->push_back({Base("s", 20)});
    baseVector->push_back({Base("s", 20)});


    for (auto &item: *baseVector) {
        cout << item.name << " " << item.age << endl;
    }

    delete baseVector;

    return 0;
}