
#include<iostream>
#include "scale/scale.hpp"

int main() {
    std::vector<uint8_t> opt{12, 107, 101, 121, 210, 4, 0, 0, 0, 0, 0, 0};
    std::string key;
    scale::ScaleDecoderStream s(opt);
    s >> key;
    int64_t value{0};
    value = scale::detail::decodeInteger<int64_t>(s);
    std::cout << value << std::endl;
    return 0;
}
