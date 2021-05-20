#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "iterator"
#include "algorithm"
#include <cstdio>
#include "set"

using namespace std;

template<typename T>
void displaySet(vector<T> set) {
    if(set.empty()){
        cout<<"结果集为空集"<<endl;
        return;
    }
    cout<<"结果集合为"<<endl;
    for (auto i = set.begin(); i < set.end(); i++) {
        cout << *i<<" ";
    }
    cout << endl;
}

template<typename T>
vector<T> add(vector<T> &set1, vector<T> &set2) {
    set<T> newSet(set1.begin(),set1.end());
    newSet.insert(set2.begin(),set2.end());
    vector<T> ret(newSet.begin(), newSet.end());
    return ret;
}

template<typename T>
vector<T> reduce(vector<T> &set2, vector<T> &set1) {
    set<T> newSet;
    for (auto i = set1.begin(); i < set1.end(); i++) {
        if(count(set2.begin(),set2.end(),*i)==0)
        newSet.insert(*i);
    }
    vector<T> ret(newSet.begin(), newSet.end());
    return ret;
}
template<typename T>
vector<T> haved(vector<T> &set1, vector<T> &set2) {
    set<T> newSet;
    for (auto i = set1.begin(); i < set1.end(); i++) {
        if(count(set2.begin(),set2.end(),*i)!=0)
            newSet.insert(*i);
    }
    vector<T> ret(newSet.begin(), newSet.end());
    return ret;
}


void run(int type, int option) {
    if (type == 1) {
        vector<int> v1;
        vector<int> v2;
        cout << "请输入集合1元素个数" << endl;
        int x;
        cin >> x;
        cout << "请输入集合1的元素" << endl;
        for (int i = 0; i < x; i++) {
            int temp;
            cin >> temp;
            v1.push_back(temp);
        }
        cout << "请输入集合2元素个数" << endl;
        cin >> x;
        cout << "请输入集合2的元素" << endl;
        for (int i = 0; i < x; i++) {
            int temp;
            cin >> temp;
            v2.push_back(temp);
        }
        switch (option) {
            case 1:displaySet(add(v1,v2));return;
            case 2:displaySet(haved(v1,v2));return;
            case 3:displaySet(reduce(v1,v2));return;
        }
    }
    if (type == 2) {
        vector<double> v1;
        vector<double> v2;
        cout << "请输入集合1元素个数" << endl;
        int x;
        cin >> x;
        cout << "请输入集合1的元素" << endl;
        for (int i = 0; i < x; i++) {
            double temp;
            cin >> temp;
            v1.push_back(temp);
        }
        cout << "请输入集合2元素个数" << endl;
        cin >> x;
        cout << "请输入集合2的元素" << endl;
        for (int i = 0; i < x; i++) {
            double temp;
            cin >> temp;
            v2.push_back(temp);
        }
        switch (option) {
            case 1:displaySet(add(v1,v2));return;
            case 2:displaySet(haved(v1,v2));return;
            case 3:displaySet(reduce(v1,v2));return;
        }
    }
    if (type == 3) {
        vector<string> v1;
        vector<string> v2;
        cout << "请输入集合1元素个数" << endl;
        int x;
        cin >> x;
        cout << "请输入集合1的元素" << endl;
        for (int i = 0; i < x; i++) {
            string temp;
            cin >> temp;
            v1.push_back(temp);
        }
        cout << "请输入集合2元素个数" << endl;
        cin >> x;
        cout << "请输入集合2的元素" << endl;
        for (int i = 0; i < x; i++) {
            string temp;
            cin >> temp;
            v2.push_back(temp);
        }
        switch (option) {
            case 1:displaySet(add(v1,v2));return;
            case 2:displaySet(haved(v1,v2));return;
            case 3:displaySet(reduce(v1,v2));return;
        }
    }

}

int main() {
    int option = 0;
    while (true) {
        top:;
        cout << "请输入进行运算的类型\n1:和 2:交 3:差 4:退出" << endl;
        cin >> option;
        if (option == 4)
            return 0;
        if (option < 1 || option > 4) {
            cout << "请输入正确的选项" << endl;
            goto top;
        }
        int type = 0;
        top2:
        cout << "请输入集合的类型 1整数 2浮点数 3字符串" << endl;
        cin >> type;
        if (type < 1 || type > 3) {
            cout << "请输入正确的选项" << endl;
            goto top2;
        }
        run(type,option);
    }

}
