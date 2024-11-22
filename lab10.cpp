   #include <iostream>
   #include <regex>
   #include <string>

   int main() {
    std::string input;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, input);

    std::regex pattern("password", std::regex_constants::icase);

    if (std::regex_search(input, pattern)) {
        std::cout << "Рядок містить слово 'password'." << std::endl;
    } else {
        std::cout << "Рядок не містить слово 'password'." << std::endl;
    }

    return 0;
}
