#pragma once
#include <unordered_map>
#include <string>
namespace edutrack { namespace services {
class AuthService {
public:
    explicit AuthService(std::unordered_map<std::string,std::string> users) : users_(std::move(users)) {}
    bool login(const std::string& userId, const std::string& role) const {
        auto it = users_.find(userId);
        return it != users_.end() && it->second == role;
    }
private:
    std::unordered_map<std::string,std::string> users_;
};
}} // namespace
