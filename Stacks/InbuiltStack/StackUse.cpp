#include <bits/stdc++.h>
using namespace std;
#include "StackUsingArray.h"
#include <stack>

int main() {
    //StackUsingArray s(4);

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    cout << s.size() << endl;
    cout << s.empty() << endl;


/*
    StackUsingArray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top() << endl;

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.size() << endl;

    cout << s.isEmpty() << endl;
    */
}