#pragma once
#include <string>
namespace edutrack { namespace domain {
struct Course {
    std::string id;
    std::string code;
    std::string title;
    std::string getId() const { return id; }
};
}} // namespace
