#pragma once
#include <string>
namespace edutrack { namespace domain {
struct Student {
    std::string id;
    std::string name;
    std::string getId() const { return id; }
};
}} // namespace
