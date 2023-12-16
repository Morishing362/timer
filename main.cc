#include <chrono>
#include <iostream>
#include <thread>

int main() {
  constexpr int countdown_seconds = 10;

  std::cout << "Starting 10-second timer..." << std::endl;

  for (int i = countdown_seconds; i > 0; --i) {
    std::cout << "Time remaining: " << i << " seconds" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }

  std::cout << "Time's up!" << std::endl;

  return 0;
}
