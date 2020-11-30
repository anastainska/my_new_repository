#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

class Bug
{
public:
    int getseverity();
    float getdeadline();
    std::string getstatus();
    std::string getassignee();
    std::string getdescription();

    Bug(int severity, float deadline, std::string status, std::string assignee, std::string description) {
        this->severity = severity;
        this->deadline = deadline;
        this->status = status;
        this->assignee = assignee;
        this->description = description;
    }

    ~Bug() {
    }
private:
    int severity;
    float deadline;
    std::string status;
    std::string assignee;
    std::string description;

};



class Backlog
{
public:
    Backlog() {
        for (int i = 0; i < 5; i++)
        {

            std::string status, assignee, description;
            if (rand() % 2 == 0) {
                status = "RESOLVED";
            }
            else
            {
                status = "NOT RESOLVED";

            }
            std::cout << "Enter the assignee : ";
            std::cin >> assignee;
            std::cout << "Enter the description : ";
            std::cin >> description;
            Bug Amount(rand() % 10 + 1, rand() % 50 + 10, status, assignee, description);
            bugs.push_back(Amount);
        }
    }

    void GetByassignee(std::string assignee) {
        for (int i = 0; i < bugs.size(); i++)
        {
            if (bugs[i].getassignee() == assignee && bugs[i].getstatus() == "RESOLVED") {
                std::cout << bugs[i].getassignee() << " " << bugs[i].getdeadline() << " " << bugs[i].getstatus() << " " << bugs[i].getseverity() << std::endl;
            }
        }
    }

    void Sort()
    {
        int len = bugs.size();
        for (int i = 0; i < len - 1; i++)
        {
            for (int j = 0; j < len - i - 1; j++)
            {
                if (bugs[j].getseverity() > bugs[j + 1].getseverity())
                {
                    std::swap(bugs[j], bugs[j + 1]);
                }
            }
        }
        for (int i = 0; i < bugs.size(); i++)
        {
            std::cout << bugs[i].getseverity() << " " << bugs[i].getdeadline() << " " << bugs[i].getdescription() << " " << bugs[i].getassignee() << " " << bugs[i].getstatus() << std::endl;
        }
    }
    ~Backlog() {}

private:
    std::vector<Bug> bugs;

};

int Bug::getseverity() {
    return severity;
}

float Bug::getdeadline() {
    return deadline;
}

std::string Bug::getstatus() {
    return status;
}

std::string Bug::getassignee() {
    return assignee;
}

std::string Bug::getdescription() {
    return description;
}