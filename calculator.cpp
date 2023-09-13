#include <iostream>
#include <string>

std::string input(std::string prompt) {
    std::cout << prompt;
    std::cout.flush();
    std::string response;
    std::getline(std::cin, response);
    return response;
}

int main (int argc, char const* argv[]) {
    while (true) {
        std::string operation = input("operation: ");

        if (operation == "add" || operation == "subtract" ||
            operation == "multiply" || operation == "divide" ||
            operation == "mod") {

            int a = std::stoi(input("left operand: "));
            int b = std::stoi(input("right operand: "));

            if (operation == "add") {
                std::cout << a + b << std::endl;
            } else if (operation == "subtract") {
                std::cout << a - b << std::endl;
            } else if (operation == "multiply") {
                std::cout << a * b << std::endl;
            } else if (operation == "divide") {
                std::cout << a / b << std::endl;
            } else if (operation == "mod") {
                std::cout << a % b << std::endl;
            }
        } else if (!operation.empty()) {
            std::cout << operation << " isn't a valid operation" << std::endl;
        } else {
            break;
        }
    }
    return 0;
}


