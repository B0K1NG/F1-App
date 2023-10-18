#include "UserAuthentication.h"
#include "Database.h"

// Constructor
UserAuthentication::UserAuthentication(Database& database) : loggedIn(false), database(database) {}

// Function to check if a user is logged in
bool UserAuthentication::isLoggedIn() const {
    return loggedIn;
}

// Function to set the login status
void UserAuthentication::setLoggedIn(bool status) {
    loggedIn = status;
}

// Function to set the logged-in user in the database
void UserAuthentication::setLoggedInUser(const User& user) {
    database.setLoggedInUser(user);
}
