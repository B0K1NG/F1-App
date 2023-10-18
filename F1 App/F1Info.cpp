// F1Info.cpp

#include "F1Info.h"
#include <iostream>
#include <vector>
#include <string>
// Function to display F1 drivers and their details
void F1Info::displayDrivers() {
    while (true) {
        // Display F1 drivers list
        std::cout << "F1 Drivers 2023:\n";
        std::cout << "-------------------\n";
        std::cout << "1.  Max Verstappen\n";
        std::cout << "2.  Sergio Perez\n";
        std::cout << "3.  Lewis Hamilton\n";
        std::cout << "4.  Fernando Alonso\n";
        std::cout << "5.  Carlos Sainz\n";
        std::cout << "6.  Charles Leclerc\n";
        std::cout << "7.  Lando Norris\n";
        std::cout << "8.  George Russel\n";
        std::cout << "9.  Oscar Piastri\n";
        std::cout << "10. Lance Stroll\n";
        std::cout << "11. Pierre Gasly\n";
        std::cout << "12. Esteban Ocon\n";
        std::cout << "13. Alexander Albon\n";
        std::cout << "14. Nico Hulkenburg\n";
        std::cout << "15. Valtteri Bottas\n";
        std::cout << "16. Zhou Guanyu\n";
        std::cout << "17. Yuki Tsunoda\n";
        std::cout << "18. Kevin Magnussen\n";
        std::cout << "19. Logan Sargeant\n";
        std::cout << "20. Daniel Ricciardo\n";
        

        // Ask user to choose a driver or go back
        int choice;
        std::cout << "Enter the number of the driver you want to know more about (0 to go back): ";
        std::cin >> choice;

        if (choice == 0) {
            break; // Go back
        }

        // Display detailed info based on user's choice
        switch (choice) {
            case 1:
                std::cout << "Driver: Max Verstappen\n";
                std::cout << "Current Team: Red Bull Racing\n";
                std::cout << "Nationality: Netherlands\n";
                std::cout <<"Podiums: 92\n";
                std::cout <<"World Championships: 2\n";
                std::cout <<"Date of birth: 30/09/1997\n";
                std::cout << "Age: 26\n";
                break;
            case 2:
                std::cout << "Driver: Sergio Perez\n";
                std::cout << "Current Team: Red Bull Racing\n";
                std::cout << "Nationality: Mexico\n";
                std::cout <<"Podiums: 34\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 26/01/1990\n";
                std::cout << "Age: 33\n";
                break;
            case 3:
                std::cout << "Driver: Lewis Hamilton\n";
                std::cout << "Current Team: Mercedes\n";
                std::cout << "Nationality: United Kingdom\n";
                std::cout <<"Podiums: 196\n";
                std::cout <<"World Championships: 7\n";
                std::cout <<"Date of birth: 07/01/1985\n";
                std::cout << "Age: 38\n";
                break;
                break;
            case 4:
                std::cout << "Driver: Fernando Alonso\n";
                std::cout << "Current Team: Aston Martin\n";
                std::cout << "Nationality: Spain\n";
                std::cout <<"Podiums: 105\n";
                std::cout <<"World Championships: 2\n";
                std::cout <<"Date of birth: 29/07/1981\n";
                std::cout << "Age: 42\n";
                break;
            case 5:
                std::cout << "Driver: Carlos Sainz\n";
                std::cout << "Current Team: Ferrari\n";
                std::cout << "Nationality: Spain\n";
                std::cout <<"Podiums: 17\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 01/09/1994\n";
                std::cout << "Age: 29\n";
                break;
            case 6:
                std::cout << "Driver: Charles Leclerc\n";
                std::cout << "Current Team: Ferrari\n";
                std::cout << "Nationality: Monaco\n";
                std::cout <<"Podiums: 27\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 16/10/1997\n";
                std::cout << "Age: 25\n";
                break;
            case 7:
                std::cout << "Driver: Lando Norris\n";
                std::cout << "Current Team: McLaren\n";
                std::cout << "Nationality: United Kingdom\n";
                std::cout <<"Podiums: 10\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 13/11/1999\n";
                std::cout << "Age: 23\n";
                break;
            case 8:
                std::cout << "Driver: George Russel\n";
                std::cout << "Current Team: Mercedes\n";
                std::cout << "Nationality: United Kingdom\n";
                std::cout <<"Podiums: 10\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 15/02/1998\n";
                std::cout << "Age: 25\n";
                break;
            case 9:
                std::cout << "Driver: Oscar Piastri\n";
                std::cout << "Current Team: McLaren\n";
                std::cout << "Nationality: Australia\n";
                std::cout <<"Podiums: 1\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 06/04/2001\n";
                std::cout << "Age: 22\n";
                break;
            case 10:
                std::cout << "Driver: Lance Stroll\n";
                std::cout << "Current Team: Aston Martin\n";
                std::cout << "Nationality: Canada\n";
                std::cout <<"Podiums: 3\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 29/10/1998\n";
                std::cout << "Age: 25\n";
                break;
            case 11:
                std::cout << "Driver: Pierre Gasly\n";
                std::cout << "Current Team: Alpine\n";
                std::cout << "Nationality: France\n";
                std::cout <<"Podiums: 4\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 07/02/1996\n";
                std::cout << "Age: 27\n";
                break;
            case 12:
                std::cout << "Driver: Esteban Ocon\n";
                std::cout << "Current Team: Alpine\n";
                std::cout << "Nationality: France\n";
                std::cout <<"Podiums: 3\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 17/09/1996\n";
                std::cout << "Age: 27\n";
                break;
            case 13:
                std::cout << "Driver: Alexander Albon\n";
                std::cout << "Current Team: Williams\n";
                std::cout << "Nationality: Thailand\n";
                std::cout <<"Podiums: 2\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 23/03/1996\n";
                std::cout << "Age: 27\n";
                break;
            case 14:
                std::cout << "Driver: Nico Hulkenburg\n";
                std::cout << "Current Team: Haas F1 Team\n";
                std::cout << "Nationality: Germany\n";
                std::cout <<"Podiums: N/A\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 19/08/1987\n";
                std::cout << "Age: 36\n";
                break;
            case 15:
                std::cout << "Driver: Valtteri Bottas\n";
                std::cout << "Current Team: Alfa Romeo\n";
                std::cout << "Nationality: Finland\n";
                std::cout <<"Podiums: 67\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 28/08/1989\n";
                std::cout << "Age: 34\n";
                break;
            case 16:
                std::cout << "Driver: Zhou Guanyu\n";
                std::cout << "Current Team: Alfa Romeo\n";
                std::cout << "Nationality: China\n";
                std::cout <<"Podiums: N/A\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 30/05/1999\n";
                std::cout << "Age: 24\n";
                break;
            case 17:
                std::cout << "Driver: Yuki Tsunoda\n";
                std::cout << "Current Team: AlphaTauri\n";
                std::cout << "Nationality: Japan\n";
                std::cout <<"Podiums: N/A\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 11/05/2000\n";
                std::cout << "Age: 23\n";
                break;
            case 18:
                std::cout << "Driver: Kevin Magnussen\n";
                std::cout << "Current Team: Haas F1 Team\n";
                std::cout << "Nationality: Denmark\n";
                std::cout <<"Podiums: 1\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 05/10/1992\n";
                std::cout << "Age: 31\n";
                break;
            case 19:
                std::cout << "Driver: Logan Sargeant\n";
                std::cout << "Current Team: Williams\n";
                std::cout << "Nationality: United States\n";
                std::cout <<"Podiums: N/A\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 31/12/2000\n";
                std::cout << "Age: 22\n";
                break;
            case 20:
                std::cout << "Driver: Daniel Ricciardo\n";
                std::cout << "Current Team: AlphaTauri\n";
                std::cout << "Nationality: Australia\n";
                std::cout <<"Podiums: 32\n";
                std::cout <<"World Championships: N/A\n";
                std::cout <<"Date of birth: 01/07/1989\n";
                std::cout << "Age: 34\n";
                break;
            // Cases for drivers (info that shows up after pressing on the driver)
            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    }
}

void F1Info::displayTeams() {
    while (true) {
        // Display F1 teams list
        std::cout << "F1 Teams 2023:\n";
        std::cout << "-------------------\n";
        std::cout << "1. Red Bull Racing\n";
        std::cout << "2. Mercedes\n";
        std::cout << "3. Ferrari\n";
        std::cout << "4. Aston Martin\n";
        std::cout << "5. McLaren\n";
        std::cout << "6. Alpine\n";
        std::cout << "7 Williams\n";
        std::cout << "8. Haas F1 Team\n";
        std::cout << "9. Alfa Romeo\n";
        std::cout << "10. AlphaTauri\n";
        // Teams that we choose from

        // Asking user to choose a team or go back
        int choice;
        std::cout << "Enter the number of the team you want to know more about (0 to go back): ";
        std::cin >> choice;

        if (choice == 0) {
            break; // Go back
        }

        // Display'ing detailed info based on user's choice
        switch (choice) {
            case 1:
                std::cout << "Team: Red Bull Racing\n";
                std::cout << "Titles: 5\n";
                std::cout << "Current Drivers: Max Verstappen, Sergio Perez\n";
                break;
            case 2:
                std::cout << "Team: Mercedes\n";
                std::cout << "Titles: 8\n";
                std::cout << "Current Drivers: George Russell, Lewis Hamilton\n";
                break;
            case 3:
                std::cout << "Team: Ferrari\n";
                std::cout << "Titles: 16\n";
                std::cout << "Current Drivers: Carlos Sainz, Charles Leclerc\n";
                break;
            case 4:
                std::cout << "Team: Aston Martin\n";
                std::cout << "Titles: 0\n";
                std::cout << "Current Drivers: Fernando Alonso, Lance Stroll\n";
                break;
            case 5:
                std::cout << "Team: Mclaren\n";
                std::cout << "Titles: 8\n";
                std::cout << "Current Drivers: Lando Norris, Oscar Piastri\n";
                break;
            case 6:
                std::cout << "Team: Alpine\n";
                std::cout << "Titles: 1\n";
                std::cout << "Current Drivers: Pierre Gasly, Esteban Ocon\n";
                break;
            case 7:
                std::cout << "Team: Williams\n";
                std::cout << "Titles: 7\n";
                std::cout << "Current Drivers: Alexander Albon, Logan Sargeant\n";
                break;
            case 8:
                std::cout << "Team: Haas F1 Team\n";
                std::cout << "Titles: 0\n";
                std::cout << "Current Drivers: Nico Hulkenberg, Kevin Magnussen\n";
                break;
            case 9:
                std::cout << "Team: Alfa Romeo\n";
                std::cout << "Titles: 2\n";
                std::cout << "Current Drivers: Valtteri Bottas, Zhou Guanyu\n";
                break;
            case 10:
                std::cout << "Team: AlphaTauri\n";
                std::cout << "Titles: 3\n";
                std::cout << "Current Drivers: Liam Lawson, Yuki Tsunoda\n";
                break;

            
            // Cases for teams
            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    }
}

void F1Info::displayStandings() {
    std::vector<std::string> driverStandings;
    std::vector<std::string> constructorStandings;

    while (true) {
        // Display F1 standings options
        std::cout << "F1 Standings 2023:\n";
        std::cout << "1. Driver Standings\n";
        std::cout << "2. Constructor Standings\n";
        std::cout << "0. Go back\n";

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 0) {
            break; // Go back
        }

        switch (choice) {
            case 1:
                std::cout << "Driver Standings 2023:\n";
                std::cout << "-------------------\n";
                driverStandings = {
                    "1. Max Verstappen - Red Bull Racing  - 400 PTS",
                    "2. Sergio Perez - Red Bull Racing  - 223 PTS",
                    "3. Lewis Hamilton - Mercedes - 190 PTS",
                    "4. Fernando Alonso - Aston Martin - 174 PTS",
                    "5. Carlos Sainz - Ferrari - 150 PTS",
                    "6. Charles Leclerc - Ferrari - 135 PTS",
                    "7. Lando Norris - McLaren - 115 PTS",
                    "8. George Russell - Mercedes - 115 PTS",
                    "9. Oscar Piastri - McLaren - 57 PTS",
                    "10. Lance Stroll - Aston Martin - 47 PTS",
                    "11. Pierre Gasly - Alpine - 46 PTS",
                    "12. Estaban Ocon - Alpine - 38 PTS",
                    "13. Alexander Albon - Williams - 21 PTS",
                    "14. Nico Hulkenberg - Haas F1 Team - 9 PTS",
                    "15. Valtteri Bottas - Alfa Romeo - 6 PTS",
                    "16. Zhou Guanyu - Alfa Romeo - 4 PTS",
                    "17. Yuki Tsunoda - AlphaTauri - 3 PTS",
                    "18. Kevin Magnussen - Haas F1 Team - 3 PTS",
                    "19. Logan Sargeant - Williams - 0 PTS",
                    "20. Daniel Ricciardo - AlphaTauri - 0 PTS",
                    // Drivers points
                };

                for (const std::string& standing : driverStandings) {
                    std::cout << standing << std::endl;
                }
                break;
            case 2:
                std::cout << "Constructor Standings 2023:\n";
                std::cout << "------------------------\n";
                constructorStandings = {
                    "1. RED BULL RACING - 623 PTS",
                    "2. MERCEDES - 305 PTS",
                    "3. Ferrari - 285 PTS",
                    "4. Aston Martin - 221 PTS",
                    "5. McLaren - 172 PTS",
                    "6. Alpine - 84 PTS",
                    "7. Williams - 21 PTS",
                    "8. Haas F1 Team - 12 PTS",
                    "9. Alfa Romeo - 10 PTS",
                    "10. AlphaTauri - 5 PTS",
                    // Points for teams
                };

                for (const std::string& standing : constructorStandings) {
                    std::cout << standing << std::endl;
                }
                break;
            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    }
}

void F1Info::displaySchedule() {
    std::cout << "F1 Schedule 2023:\n";
    std::cout << "------------------\n";
    
    std::string scheduleInfo = R"(
    03-05 MAR  - Bahrain Grand Prix
    17-19 MAR  - Saudi Arabian Grand Prix
    31 MAR-02 APR - Australian Grand Prix
    28-30 APR  - Azerbaijan Grand Prix
    05-07 MAY  - Miami Grand Prix
    19-21 MAY  - Italian Grand Prix
    26-28 MAY  - Monaco Grand Prix
    02-04 JUN  - Spanish Grand Prix
    16-18 JUN  - Canadian Grand Prix
    30 JUN-02 JUL - Austrian Grand Prix
    07-09 JUL  - British Grand Prix
    21-23 JUL  - Hungarian Grand Prix
    28-30 JUL  - Belgian Grand Prix
    25-27 AUG  - Dutch Grand Prix
    01-03 SEP  - Italian Grand Prix
    15-17 SEP  - Singapore Grand Prix
    22-24 SEP  - Japanese Grand Prix
    06-08 OCT  - Qatar Grand Prix
    20-22 OCT  - United States Grand Prix
    27-29 OCT  - Mexico Grand Prix
    03-05 NOV  - Brazilian Grand Prix
    16-18 NOV  - Silver Las Vegas Grand Prix
    24-26 NOV  - Abu Dhabi Grand Prix
    )";

    std::cout << scheduleInfo;

    std::cout << "\n0. Go back\n";
    int choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice == 0) {
        return; // Go back
    } else {
        std::cout << "Invalid choice.\n";
    }
}

void F1Info::displayLegends() {
    while (true) {
        // Display F1 legends options
        std::cout << "F1 Legends 2023:\n";
        std::cout << "1. Legend Drivers\n";
        std::cout << "2. Legend Teams\n";
        std::cout << "0. Go back\n";

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 0) {
            break; // Go back
        }

        switch (choice) {
            case 1:
                std::cout << "Legend Drivers:\n";
                std::cout << "----------------\n";
                std::cout << "1. Juan Manuel Fangio\n";
                std::cout << "2. Jack Brabham\n";
                std::cout << "3. Jim Clark\n";
                std::cout << "4. Jackie Stewart\n";
                std::cout << "5. Niki Lauda\n";
                std::cout << "6. Alain Prost\n";
                std::cout << "7. Ayrton Senna\n";
                std::cout << "8. Michael Schumacher\n";
                // Legend drivers
                break;
            case 2:
                std::cout << "Legend Teams:\n";
                std::cout << "--------------\n";
                std::cout << "1. Ferrari (1950-present)\n";
                std::cout << "2. Williams (1978-present)\n";
                std::cout << "3. Lotus (1958-1994)\n";
                std::cout << "4. Mercedes Benz (1954-1955, 2010 - present)\n";
                std::cout << "5. McLaren (1966 - Present)\n";
                // Legend teams
                break;
            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    }
}
