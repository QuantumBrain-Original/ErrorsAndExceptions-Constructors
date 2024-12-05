#pragma once

class Custom_Except : public std::exception
{
protected:
    std::string err_except_msg; // сообщение об ошибке
public:
    Custom_Except(const std::string& msg);

    const char* what() const noexcept override;
};
