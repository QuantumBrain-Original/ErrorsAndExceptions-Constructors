#include <exception>
#include <string>
#include "sCustom_Except.h"

Custom_Except::Custom_Except(const std::string& msg) : err_except_msg(msg) {}

const char* Custom_Except::what() const noexcept
{
    return err_except_msg.c_str();
}
