#ifndef GENERIC_REGSTER_H
#define GENERIC_REGSTER_H

#include <iostream>


typedef enum{
    NOK,
    OK
}ErrorStatus;

typedef enum{
    Read_Only,
    Write_only,
    Read_Write,
    Reserved
}Reg_Permission;

template <class T>
class Generic_Register
{
    public:
        T * PrvRegAddress;
        T prvRead;
        T prvWrite;

        Generic_Register(T* Register);
        ErrorStatus setRegisterValue(T Copy_RegValue);
        ErrorStatus getRegisterValue(T & Ref_Regvalue);
        ErrorStatus setBit(std::uint8_t Copy_uint8BitNum);
        ErrorStatus clearBit(std::uint8_t Copy_uint8BitNum);
        ErrorStatus getBit(std::uint8_t Copy_uint8BitNum, std::uint8_t* Add_uint8BitValue);
        ErrorStatus setPermission(std::uint8_t Copy_uint8BitNum, Reg_Permission permission);
};




#endif  /* GENERIC_REGSTER_H */