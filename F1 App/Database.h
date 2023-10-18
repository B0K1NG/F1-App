#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include "User.h"
#include "UserAuthentication.h"

class Database {
private:
    User loggedInUser; // Stores information of the currently logged-in user
    std::vector<User> users; // Vector to hold user data
    UserAuthentication userAuth; // User authentication object

public:
    Database(); // Constructor

    bool registerUser(const User& user); // Register a new user
    bool login(const std::string& username, const std::string& password); // Login a user
    bool saveUsersToFile(); // Save user information to a file
    bool loadUsersFromFile(); // Load user information from a file
    std::vector<User>::iterator findUser(const std::string& username); // Find a user by their username
    void updateUser(const User& user); // Update user information
    void deleteUser(const std::string& username); // Delete a user by their username
    UserAuthentication& getUserAuth(); // Get the UserAuthentication object associated with this Database
    void setLoggedInUser(const User& user); // Set the currently logged-in user
};

#endif // DATABASE_H
