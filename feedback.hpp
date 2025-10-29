#pragma once
#include <string>
#include <chrono>
namespace edutrack { namespace domain {
struct Feedback {
    std::string id;
    std::string courseId;
    std::string studentId;
    int rating{0};
    std::string comment;
    std::chrono::system_clock::time_point timestamp;
    bool isValidRating() const { return rating >= 1 && rating <= 5; }
};
}} // namespace
