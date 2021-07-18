#ifndef REGEXENGINESTD_H
#define REGEXENGINESTD_H
#include "regexengine.h"
#include <regex>
class RegexEngineSTD: public RegexEngine{

private:
    std::vector<std::string> matches;
    std::string regex;
    std::string target;

public:
    RegexEngineSTD();
    virtual ~RegexEngineSTD();
    virtual std::vector<std::string> obtainMatches() override;
    virtual void setRegex(const std::string& regex_str) override;
    virtual std::string getRegex() override;
    virtual void setTarget(const std::string& target_str) override;
    virtual std::string getTarget() override;
};
#endif // REGEXENGINESTD_H
