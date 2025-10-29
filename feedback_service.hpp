#pragma once
#include <vector>
#include <string>
#include "../repos/feedback_repository.hpp"
#include "../repos/course_repository.hpp"
#include "../domain/feedback.hpp"
#include "../domain/report.hpp"
#include "report_service.hpp"
namespace edutrack { namespace services {
class FeedbackService {
public:
    FeedbackService(repos::FeedbackRepository& fbRepo, repos::CourseRepository& cRepo, ReportService& repSvc)
        : fbRepo_(fbRepo), cRepo_(cRepo), repSvc_(repSvc) {}
    edutrack::domain::Feedback submitFeedback(const std::string& studentId, const std::string& courseId, int rating, const std::string& comment);
    edutrack::domain::Report getFacultyView(const std::string& courseId) const;
    std::vector<edutrack::domain::Feedback> getAdminAll() const;
private:
    std::string generateId() const;
    repos::FeedbackRepository& fbRepo_;
    repos::CourseRepository& cRepo_;
    ReportService& repSvc_;
};
}} // namespace
