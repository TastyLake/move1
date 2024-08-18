#pragma once
#include <vector>
#include <string>

template <typename T>
void move_vectors(std::vector<T>& lhs, std::vector<T>& rhs)
{
    std::vector<T> tmp = std::move(lhs);
    lhs = std::move(rhs);
    rhs = std::move(tmp);
}

template <>
void move_vectors(std::vector<std::string>& lhs, std::vector<std::string>& rhs)
{
    std::vector<std::string> tmp = std::move(lhs);
    lhs = std::move(rhs);
    rhs = std::move(tmp);
}