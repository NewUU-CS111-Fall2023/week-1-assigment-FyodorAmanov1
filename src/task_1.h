/*
 * Author: Fyodor Amanov
 * Date:
 * Name:
 */
#include <iostream>
#include <string>
using namespace std;
class plant{
private:
    int number_of_leaves;
public:
    string name;
    int SetName(string NewName){
        name = NewName;
        return 0;
    }
    void PrintName(){
        cout << name << endl;
    }
    bool With_flowers;
    string whose;
};
