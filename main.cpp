#include <iostream>
#include <chrono>
#include <iomanip>

int main() {
    // std::chrono::seconds t1(5*100);
    // std::chrono::minutes t2(5);
    std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
    std::time_t t_now = std::chrono::system_clock::to_time_t(now);
    std::tm* tm_now = std::localtime(&t_now);

    std::cout << std::put_time(tm_now, "%Y-%m-%d %H:%M:%S") << std::endl;
    // std::cout << t2.count();
}