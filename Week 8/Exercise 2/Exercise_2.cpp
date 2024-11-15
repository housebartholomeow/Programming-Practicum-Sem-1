#include <iostream>

int main(){
    long long int NISN[] = {9970293945, 9970272750, 9965653989, 9963959682, 9960312699, 9952382180, 9950310962};
    int Value[] = {70, 60, 60, 55, 90, 65, 80};
    int dataSize = sizeof(NISN)/sizeof(NISN[0]);

    long long int query = 9950310962;

    int left = 0, right = dataSize - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (NISN[mid] == query) {
            result = mid;
            break;
        } else if (NISN[mid] < query) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (result != -1) {
        std::cout << "NISN 9950310962 is found in the array. The value of the NISN is " << Value[result] << "." << std::endl;
    } else {
        std::cout << "NISN 9950310962 is not found in the array." << std::endl;
    }

    return 0;
}
