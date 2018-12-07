#include "configure.h"
#ifndef AES_H
#define AES_H

class AES{
public:
    AES();
    void ByteSub(std::bitset<8> data[16]);
    void RowShift(std::bitset<8> data[16]);

    void InvRowShift(std::bitset<8> data[16]);
    void InvByteSub(std::bitset<8> data[16]);
};

#endif // AES_H
