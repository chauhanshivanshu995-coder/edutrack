#pragma once
#include <vector>
#include "../domain/feedback.hpp"
#include "../domain/report.hpp"
namespace edutrack { namespace services {
class ReportService {
public:
    edutrack::domain::Report buildCourseReport(const std::vector<edutrack::domain::Feedback>& feedbacks) const;
};
}} // namespace
