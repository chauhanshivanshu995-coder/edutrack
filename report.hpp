#pragma once
#include <string>
#include <vector>
namespace edutrack { namespace domain {
struct Report {
    std::string courseId;
    double averageRating{0.0};
    int totalResponses{0};
    std::vector<std::string> comments;
};
}} // namespace
