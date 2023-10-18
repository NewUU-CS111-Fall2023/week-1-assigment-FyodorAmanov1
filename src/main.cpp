/*
 * Author: Fyodor Amanov
 * Date: 10/18/2023
 * Name:
 */

#include "task_1.h"
#include <iostream>
using namespace std;

int main(){
    cout << "Task 1" << endl;
    plant flower;
    flower.SetName("Purslane");
    flower.PrintName();

    plant tree;
    tree.SetName("Oak tree");
    tree.PrintName();

    return 0;

}

