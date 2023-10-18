#include "Menu.h"
#include <iostream>
#include <vector>
#include <conio.h>
#include <chrono>
#include <thread>

Menu::Menu() : database(), currentUser(), f1Info(), signedOut(false) {}

// Returns a reference to the UserAuthentication object in the Database
UserAuthentication& Menu::getUserAuthentication() {
    return database.getUserAuth();
}

// Displays the F1 information menu and handles user choices
void Menu::displayF1Menu() {
    int choice;
    while (true) {
        // Display menu options for F1 info section
        std::cout << "Welcome to the F1 info section!\n";
        std::cout << "1. Display F1 Drivers\n";
        std::cout << "2. Display F1 Teams\n";
        std::cout << "3. Display F1 Standings\n";
        std::cout << "4. Display F1 Schedule\n";
        std::cout << "5. Display F1 Legends\n";
        std::cout << "6. Go Back\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Process user's choice
        switch (choice) {
            case 1:
                f1Info.displayDrivers();
                break;
            case 2:
                f1Info.displayTeams();
                break;
            case 3:
                f1Info.displayStandings();
                break;
            case 4:
                f1Info.displaySchedule();
                break;
            case 5:
                f1Info.displayLegends();
                break;
            case 6:
                return; // Go back
            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    }
}

// Displays the menu for a logged-in user and handles user choices
void Menu::displayLoggedInMenu() {
    int choice;
    while (true) {
        // Display menu options for logged-in users
        std::cout << "Logged In Menu:\n";
        std::cout << "1. Display F1 Drivers\n";
        std::cout << "2. Display F1 Teams\n";
        std::cout << "3. Display F1 Standings\n";
        std::cout << "4. Display F1 Schedule\n";
        std::cout << "5. Display F1 Legends\n";
        std::cout << "6. Sign Out\n"; // Changed from "Go Back" to "Sign Out"
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Process user's choice
        switch (choice) {
            case 1:
                f1Info.displayDrivers();
                break;
            case 2:
                f1Info.displayTeams();
                break;
            case 3:
                f1Info.displayStandings();
                break;
            case 4:
                f1Info.displaySchedule();
                break;
            case 5:
                f1Info.displayLegends();
                break;
            case 6:
                signOut(); // Added call to signOut function
                return; // Go back to main menu after signing out
            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    }
}

// Displays the main menu options (Register, Login, Quit)
void Menu::displayMenu() {
    std::cout << "Welcome to F1App!\n";
    std::cout << "1. Register\n";
    std::cout << "2. Login\n";
    std::cout << "3. Quit\n";
}

// Registers a new user by prompting for various information
void Menu::registerUser() {
    std::string username, name, surname, dob, email, password;

    std::cout << "Enter username: ";
    std::cin >> username;

    currentUser.setUsername(username);

    currentUser.promptAndSetPassword(); 

    currentUser.promptAndSetName();
    currentUser.promptAndSetDateOfBirth();

    currentUser.promptAndSetEmail();

    bool success = database.registerUser(currentUser);

    if (success) {
        std::cout << "Registration successful!\n";
    } else {
        std::cout << "Registration failed. Please try again.\n";
    }
}

// Logs in a user by prompting for username and password
void Menu::loginUser() {
    std::string username, password;

    std::cout << "Enter username: ";
    std::cin >> username;

    std::cout << "Enter password: ";
    char ch;
    while ((ch = _getch()) != '\r') {
        if (ch != '\b') {
            password += ch;
            std::cout << '*';
        } else if (!password.empty()) {
            password.pop_back();
            std::cout << "\b \b";
        }
    }
    std::cout << std::endl;

    bool success = database.login(username, password);

    if (success) {
        std::cout << "Login successful!\n";
    } else {
        std::cout << "Username or password is incorrect. Please try again.\n";
    }
}

// Signs out the current user
void Menu::signOut() {
    getUserAuthentication().setLoggedIn(false);
    currentUser = User(); // Reset current user
    signedOut = true;
    std::cout << "You have been signed out.\n";
    displayMenu(); // Add this line to return to the main menu after signing out
}

// Resets the signedOut flag to false
void Menu::resetSignedOut() {
    signedOut = false;
}

// Checks if the user is signed out
bool Menu::userSignedOut() {
    return signedOut;
}

// Displays a goodbye message and exits the program
void Menu::quit() {
    std::cout << "Goodbye! Have a wonderful day!\n";
    system("timeout 5 >nul");
    signedOut = true;
    exit(0);
}

// Returns a reference to the Database object
Database& Menu::getDatabase() {
    return database;
}
