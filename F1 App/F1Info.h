#ifndef F1INFO_H
#define F1INFO_H

#include <string>

class F1Info {
public:
    static const std::string currentYear; // Static constant for current year

    void displayDrivers(); // Function to display F1 drivers
    void displayTeams(); // Function to display F1 teams
    void displayStandings(); // Function to display F1 standings
    void displaySchedule(); // Function to display F1 schedule
    void displayLegends(); // Function to display F1 legends
};

#endif // F1INFO_H
