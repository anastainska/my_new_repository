#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

class Bug
{
public:
    int getSeverity();
    float getDeadline();
    std::string getStatus();
    std::string getAssignee();
    std::string getDescription();

    Bug(int severity, float deadline, std::string status, std::string assignee, std::string description) {
        this->severity = severity;
        this->deadline = deadline;
        this->status = status;
        this->assignee = assignee;
        this->description = description;
    }
    
    ~Bug() {}

private:
    int severity;
    float deadline;
    std::string status;
    std::string assignee;
    std::string description;
};