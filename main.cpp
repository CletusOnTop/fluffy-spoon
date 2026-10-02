#include <iostream>
#include <algorithm>
#include <iterator>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    char yes[] = {'b', 'a', 's', 'k', 'a', 'm'};
    int n = size(yes);
    while(true)
    {
        cout << yes[0] << yes[1] << yes[2] << yes[3] << yes[4] << yes[5] << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
        rotate(yes, yes+1,yes+6);
    }
    
    

    cout << endl;

    return 0;
}   