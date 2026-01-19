#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    auto array[3] = {1,2,"hello"};
    for(auto i : array){
    	cout << i <<endl;
    }
    return 0;
}