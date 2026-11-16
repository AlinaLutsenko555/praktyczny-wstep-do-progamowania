#include <iostream>
#include <string> 
int main() { 
std:: cout << sizeof("ala") << std::endl;
std:: cout << sizeof("90") << std::endl;
std:: cout << sizeof("bardzo długie zdanie") << std::endl;
std:: cout << sizeof("a") << std::endl;
std:: cout << sizeof("ę") << std::endl;
std:: cout << sizeof("ł") << std::endl;
std::string s1("1");
std::string s2("cześć");
std::string s3("bardzo długi tekst");
std:: cout << sizeof(s1) << std::endl;
std:: cout << sizeof(s2) << std::endl;
std:: cout << sizeof(s3) << std::endl;
    return 0;
}