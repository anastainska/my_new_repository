#pragma once
#include "laba5.h"
#include "Backlog.h"

int main() {

    Backlog log;
    log.GetByassignee("test");
    log.SortBySeverity();
    return 0;
}

int Bug::getSeverity() {
    return severity;
}

float Bug::getDeadline() {
    return deadline;
}

std::string Bug::getStatus() {
    return status;
}

std::string Bug::getAssignee() {
    return assignee;
}

std::string Bug::getDescription() {
    return description;
}