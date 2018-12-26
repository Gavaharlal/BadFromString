//
// Created by Computer on 26.12.2018.
//

#include "BadFromStringException.h"
#include <string>

#include "BadFromStringException.h"

const char *BadFromStringException::what() const noexcept {
    return message.c_str();
}

BadFromStringException::BadFromStringException(const std::string data) : message(data) {}
