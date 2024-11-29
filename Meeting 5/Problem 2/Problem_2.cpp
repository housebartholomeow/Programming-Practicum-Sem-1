#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> input_vector(const std::vector<int>& input) {
    std::vector<int> reversed_vector(input);
    std::reverse(reversed_vector.begin(), reversed_vector.end());
    return reversed_vector;
}

int main() {
    std::vector<int> inputVector;
    int n, element;

    std::cout<<"Please enter the number of elements in the vector."<<std::endl;
    std::cin>>n;

    std::cout<<"Please enter the elements of the vector:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> element;
        inputVector.push_back(element);
    }

    std::vector<int> reversedVector = input_vector(inputVector);

    std::cout << "Reversed vector: ";
    for (int val : reversedVector) {
        std::cout << val << " ";
    }

    std::cout << std::endl;
    return 0;
}
