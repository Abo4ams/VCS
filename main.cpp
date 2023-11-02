#include <iostream>
#include <vector>

int getSum(std::vector<int> v){
    int sum = 0;
    for(auto& i : v)
        sum += i;
    return sum;
}

int main() {
    std::vector<int> v;
    for(int i = 1; i <= 10; i++)
        v.push_back(i);
    int sum = getSum(v);
    std::cout << sum << std::endl;
    return 0;
}