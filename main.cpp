#include <iostream>
#include <vector>

int getSum(std::vector<int> v){
    int sum = 0;
    for(auto& i : v)
        sum += i;
    return sum;
}

double getAverage(std::vector<int> v) {
    int sum = 0;
    double avg;
    for (auto &i: v)
        sum += i;
    avg = (double) sum / v.size();
    return avg;
}

int getMin(std::vector<int> v){
    int mn = v[0];
    for(auto& i : v)
        mn = std::min(mn, i);
    return mn;
}

int main() {
    std::vector<int> v;
    for(int i = 1; i <= 10; i++)
        v.push_back(i);
    int sum = getSum(v);
    std::cout << sum << std::endl;
    double avg = getAverage(v);
    std::cout << avg << std::endl;
    int mn = getMin(v);
    std::cout << mn << std::endl;
    return 0;
}