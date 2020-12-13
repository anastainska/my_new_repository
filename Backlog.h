#pragma once
#include "laba5.h"

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
            if (bugs[i].getAssignee() == assignee && bugs[i].getStatus() == "RESOLVED") {
                std::cout << bugs[i].getAssignee() << " " << bugs[i].getDeadline() << " " << bugs[i].getStatus() << " " << bugs[i].getSeverity() << std::endl;
            }
        }
    }

    void SortBySeverity()
    {
        int len = bugs.size();
        for (int i = 0; i < len - 1; i++)
        {
            for (int j = 0; j < len - i - 1; j++)
            {
                if (bugs[j].getSeverity() > bugs[j + 1].getSeverity())
                {
                    std::swap(bugs[j], bugs[j + 1]);
                }
            }
        }
        for (int i = 0; i < bugs.size(); i++)
        {
            std::cout << bugs[i].getSeverity() << " " << bugs[i].getDeadline() << " " << bugs[i].getDescription() << " " << bugs[i].getAssignee() << " " << bugs[i].getStatus() << std::endl;
        }
    }
    ~Backlog() {}

private:
    std::vector<Bug> bugs;
};