#ifndef REGEXENGINE_H
#define REGEXENGINE_H
#include <string>
#include <vector>
class RegexEngine{
public:
    virtual ~RegexEngine(){}
    virtual std::vector<std::string> obtainMatches() = 0;
    virtual void setRegex(const std::string& regex_str) = 0;
    virtual std::string getRegex() = 0;
    virtual void setTarget(const std::string& target_str) = 0;
    virtual std::string getTarget() = 0;
};

#endif // REGEXENGINE_H
