#ifndef MENU_H
#define MENU_H

#include "UserAuthentication.h"
#include "User.h"
#include "F1Info.h"
#include "Database.h"

class Menu {
private:
    Database database; // Database object to manage user data
    User currentUser; // Current user object
    F1Info f1Info; // F1 information object
    bool signedOut; // Flag to track if user is signed out

public:
    Menu();
    UserAuthentication& getUserAuthentication(); // Returns UserAuthentication object
    void displayF1Menu(); // Displays F1 information menu
    void displayLoggedInMenu();  // Displays menu for logged-in users
    void displayMenu();  // Displays main menu options
    void registerUser();  // Registers a new user
    void loginUser(); // Logs in a user
    void signOut();  // Signs out the current user
    void resetSignedOut(); // Resets signedOut flag
    bool userSignedOut(); // Checks if user is signed out
    void quit(); // Quits the program
    Database& getDatabase(); // Returns the Database object
};

#endif // MENU_H
