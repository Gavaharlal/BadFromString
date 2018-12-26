//
// Created by Computer on 26.12.2018.
//
#pragma once

#include <exception>
#include <string>

class BadFromStringException : public std::exception {
public:
    explicit BadFromStringException(std::string);
    ~BadFromStringException() override = default;
    const char *what() const noexcept override;

    const std::string message;
};

