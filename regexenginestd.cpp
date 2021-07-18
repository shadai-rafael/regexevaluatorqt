/*
*   Copyright (C) 2021 Shadai Rafael Lopez Garcia
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*    This program is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include "regexenginestd.h"

RegexEngineSTD::RegexEngineSTD(){

}

RegexEngineSTD::~RegexEngineSTD(){

}

void RegexEngineSTD::setRegex(const std::string& regex_str){
    this->regex = regex_str;
}

std::string RegexEngineSTD::getRegex(){
    return this->regex;
}

void RegexEngineSTD::setTarget(const std::string& target_str){
    this->target = target_str;
}

std::string RegexEngineSTD::getTarget(){
    return this->target;
}

std::vector<std::string> RegexEngineSTD::obtainMatches(){
    std::smatch sm;
    std::regex regexStr(this->regex);
    this->matches.clear();
    if(std::regex_match(this->target.cbegin(),
                        this->target.cend(),
                        sm,regexStr,
                        std::regex_constants::match_default)){

        for (auto i=0; i<sm.size(); ++i) {
            this->matches.push_back(sm[i].str());
        }
    }
    return this->matches;
}
