#include "base64.hpp"
#include <iostream>
#include <string>

int main() {
    // Original text
    char encSrc[12] = "Hello World";
    size_t encSize = boost::beast::detail::base64::encoded_size(11);
    void * encDest[encSize];
    boost::beast::detail::base64::encode( encDest, reinterpret_cast<void*>(encSrc), 11);
    std::cout << encSrc << " --> " << reinterpret_cast<char*>(encDest) << std::endl;

    // Decode the Base64 string
    char decSrc[25] = "SGVsbG8gV29ybGQAiI4CLw==";
    size_t decSize = boost::beast::detail::base64::decoded_size(24);
    void * decDest[decSize];
    boost::beast::detail::base64::decode( decDest, decSrc, 24);
    std::cout << decSrc << " --> " << reinterpret_cast<char*>(decDest) << std::endl;

    return 0;
}
