#include <iostream>
#include <string>

int getMinOperations(const std::string& series) {
    int operations = 0;

    for (int i = 1; i < series.length(); i++) {
        if (series[i] != series[i - 1]) {
            operations++;
        }
    }

    return operations;
}

int main() {
    std::string series;
    std::cin >> series;

    int minOperations = getMinOperations(series);
    std::cout << minOperations << std::endl;

    return 0;
}
