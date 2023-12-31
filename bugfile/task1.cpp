#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;

bool has_close_elements(vector<float> numbers, float threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[i] - numbers[j]) < threshold)
                return true;
        }
    }
    return false;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 3.5, 4.0};
    float threshold = 0.5;
    
    if (has_close_elements(numbers, threshold)) {
        printf("There are close elements in the vector.\n");
    } else {
        printf("There are no close elements in the vector.\n");
    }

    return 0;
}
