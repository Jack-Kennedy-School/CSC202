#include <vector>

std::vector<int> histogram(const std::vector<int>& values, int min_value, int max_value)
{
    std::vector<int> result(max_value - min_value + 1, 0);
    for (int value : values) {
        if (value >= min_value && value <= max_value) {
            result[value - min_value]++;
        }
    }
    return result;
}
