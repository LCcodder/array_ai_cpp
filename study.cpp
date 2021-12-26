#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;



float func(float x) {

    if (x <= 0) {
        return 0;
    } 
    if (x == 0.5) {
        return 0.5;
    }
    else {
        return 1;
    }
    
}

int main(int argc, const char * argv[]) {

    

    int array[3];
    cout << "Enter first number in input array: ";

    cin >> array[0];

    cout << "Enter second number in input array: ";

    cin >> array[1];

    cout << "Enter third number in input array: ";

    cin >> array[2];

    float weights[3] = { 0.5, -0.5, 0.5};
    

    float output = float(array[0]) * weights[0] + float(array[1]) * weights[1] + float(array[2]) * weights[2];
    cout << "Your output is: " << func(output);


    return 0;
}
