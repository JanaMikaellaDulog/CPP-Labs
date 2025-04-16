#include <iostream>
#include <string>
#include <cctype>
#include <regex>

//for simple catching of just letters and spaces, does not allow special characters tho
bool isValidName(const std::string &name){
    for (char ch : name) {
        if (!std::isalpha(ch) && ch != ' ') {  // Allow letters and spaces only
            return false; // if does not contain only these, will return false
        }
    }
    return true;
}

//use of regex for with special characters
bool isValidRegex(const std::string &fullname){
    //regex breakdown - R -regex
    // ^ - start the string
    // [A-Za-z] - at least one letter, uppercase or lowercase
    //([ '-][A-Za-z]+) - allows space, ' , -, ., and another word (for multi-word names)
    // $ - end of string
    std::regex pattern(R"(^[A-Za-z.]+([ '-][A-Za-z.]+)*$)");
    return std::regex_match(fullname, pattern);
}

int main (){

std::string fullname;

//use of isalpha
/*
while (true){
    std::cout << "Enter Full Name: ";
    std::getline(std::cin, fullname);
    
    if (isValidName(fullname)){
        std::cout << "Hello " << fullname << std::endl;
        break;
    } else {
        std::cout << "Not a valid name" << std::endl;
    }
}*/

while (true){
    std::cout << "Enter Full Name: ";
    std::getline(std::cin, fullname);
    
    if (isValidRegex(fullname)){
        std::cout << "Hello " << fullname << std::endl;
        break;
    } else {
        std::cout << "Not a valid name" << std::endl;
    }
}



}