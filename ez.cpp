#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cout << "Pass at least 1 argument to the command!" << std::endl;
    return 1;
  }
  std::string command = "sudo ";
  for (int i = 1; i < argc; ++i) {
    command = command + argv[i] + " ";
  }
  std::system(command.c_str());
  return 0;
}
