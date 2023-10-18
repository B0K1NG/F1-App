#ifndef USERAUTHENTICATION_H
#define USERAUTHENTICATION_H

#include "User.h" // Include the User class header

class Database; // Forward declaration of the Database class

class UserAuthentication {
private:
    bool loggedIn; // Flag to indicate if a user is logged in
    Database& database; // Reference to a Database object

public:
    // Constructor that takes a reference to a Database object
    UserAuthentication(Database& database);

    // Function to check if a user is logged in
    bool isLoggedIn() const;

    // Function to set the login status
    void setLoggedIn(bool status);

    // Function to set the logged-in user in the database
    void setLoggedInUser(const User& user);
};

#endif // USERAUTHENTICATION_H
