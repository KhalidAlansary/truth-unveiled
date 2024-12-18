#include <cstdlib>
#include <iostream>
#include <string>

const int a = 7, b = 4;
const std::string message = "QUESTI DATI SONO CLASSIFICATI";

std::string encrypt(const std::string& message) {
  std::string cipher;
  cipher.reserve(message.size());

  for (const char& c : message) {
    if (c == ' ') {
      cipher.push_back(c);
    } else {
      cipher.push_back(static_cast<char>((a * (c - 'A') + b) % 26 + 'A'));
    }
  }

  return cipher;
}

int main() {
  std::cout << encrypt(message) << "\n";
  return EXIT_SUCCESS;
}
