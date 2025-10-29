#include <cassert>
#include <iostream>
#include "../include/edutrack/services/report_service.hpp"
#include "../include/edutrack/services/feedback_service.hpp"
#include "../include/edutrack/repos/feedback_repository.hpp"
#include "../include/edutrack/repos/course_repository.hpp"
using namespace edutrack;
using domain::Feedback;
void test_feedback_rating() {
    Feedback f; f.rating = 5; assert(f.isValidRating());
    f.rating = 6; assert(!f.isValidRating());
    f.rating = 0; assert(!f.isValidRating());
    std::cout << "test_feedback_rating passed\n";
}
void test_report_average() {
    services::ReportService repSvc;
    std::vector<Feedback> fbs;
    fbs.push_back(Feedback{"1","c1","s1",5,"good"});
    fbs.push_back(Feedback{"2","c1","s2",3,"ok"});
    auto rep = repSvc.buildCourseReport(fbs);
    assert(rep.totalResponses == 2);
    assert(rep.averageRating == 4.0);
    std::cout << "test_report_average passed\n";
}
int main(){ test_feedback_rating(); test_report_average(); std::cout << "All tests passed.\n"; return 0; }
