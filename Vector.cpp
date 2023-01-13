#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;

    int size;
    std::cin >> size;

    for (int i = 0; i < size; i++) {
        int element;
        v.push_back(element);
    }

    for (auto element : v) {
        std::cout << element << "  ";
    }

    return 0;
}