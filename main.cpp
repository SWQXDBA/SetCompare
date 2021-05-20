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
        cout<<"�����Ϊ�ռ�"<<endl;
        return;
    }
    cout<<"�������Ϊ"<<endl;
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
        cout << "�����뼯��1Ԫ�ظ���" << endl;
        int x;
        cin >> x;
        cout << "�����뼯��1��Ԫ��" << endl;
        for (int i = 0; i < x; i++) {
            int temp;
            cin >> temp;
            v1.push_back(temp);
        }
        cout << "�����뼯��2Ԫ�ظ���" << endl;
        cin >> x;
        cout << "�����뼯��2��Ԫ��" << endl;
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
        cout << "�����뼯��1Ԫ�ظ���" << endl;
        int x;
        cin >> x;
        cout << "�����뼯��1��Ԫ��" << endl;
        for (int i = 0; i < x; i++) {
            double temp;
            cin >> temp;
            v1.push_back(temp);
        }
        cout << "�����뼯��2Ԫ�ظ���" << endl;
        cin >> x;
        cout << "�����뼯��2��Ԫ��" << endl;
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
        cout << "�����뼯��1Ԫ�ظ���" << endl;
        int x;
        cin >> x;
        cout << "�����뼯��1��Ԫ��" << endl;
        for (int i = 0; i < x; i++) {
            string temp;
            cin >> temp;
            v1.push_back(temp);
        }
        cout << "�����뼯��2Ԫ�ظ���" << endl;
        cin >> x;
        cout << "�����뼯��2��Ԫ��" << endl;
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
        cout << "������������������\n1:�� 2:�� 3:�� 4:�˳�" << endl;
        cin >> option;
        if (option == 4)
            return 0;
        if (option < 1 || option > 4) {
            cout << "��������ȷ��ѡ��" << endl;
            goto top;
        }
        int type = 0;
        top2:
        cout << "�����뼯�ϵ����� 1���� 2������ 3�ַ���" << endl;
        cin >> type;
        if (type < 1 || type > 3) {
            cout << "��������ȷ��ѡ��" << endl;
            goto top2;
        }
        run(type,option);
    }

}
