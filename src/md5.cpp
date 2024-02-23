#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string md5(const std::string& input) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)input.c_str(), input.length(), digest);

    char mdString[33];
    for (int i = 0; i < 16; i++)
         sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);

    return mdString;
}

int main() {
    std::string input;
    std::cout << "Enter a string to hash: ";
    std::getline(std::cin, input);

    std::string hashed = md5(input);
    std::cout << "MD5 Hash: " << hashed << std::endl;

    return 0;
}