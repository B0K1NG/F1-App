#include "Database.h"
#include <fstream>
#include <algorithm>
#include <iostream>

// Constructor for Database class
Database::Database() : userAuth(*this) {
    loadUsersFromFile(); // Load users from file when the database is created
}

// Register a new user
bool Database::registerUser(const User& user) {
    if (findUser(user.getUsername()) != users.end()) {
        return false; // User already exists
    }
// Checks if user is older than 16 years old based on current year
    int userBirthYear = std::stoi(user.getDateOfBirth().substr(6, 4));
    int currentYear = 2023;
    if (currentYear - userBirthYear < 16) {
        std::cout << "You must be 16 years old or older to register.\n";
        return false;
    }

    users.push_back(user);

    // Save users to file after registering a new user
    saveUsersToFile();

    return true; // Registration successful
}

// Login a user
bool Database::login(const std::string& username, const std::string& password) {
    auto it = findUser(username);
    if (it != users.end() && it->getPassword() == password) {
        userAuth.setLoggedIn(true); // Update login status using UserAuthentication
        loggedInUser = *it; // Set the logged-in user
        return true; // Login successful
    }
    return false; // Login failed
}

// Save user information to a file
bool Database::saveUsersToFile() {
    std::ofstream file("users.txt");
    if (!file.is_open()) {
        return false; // Unable to open file
    }

    for (const User& user : users) {
        file << user.getUsername() << " " << user.getPassword() << " " << user.getName() << " " << user.getSurname() << " " << user.getDateOfBirth() << " " << user.getEmail() << "\n";
    }

    return true; // Save successful
}

// Load user information from a file
bool Database::loadUsersFromFile() {
    std::ifstream file("users.txt");
    if (!file.is_open()) {
        return false; // Unable to open file
    }

    users.clear(); // Clear existing users

    std::string username, password, name, surname, dob, email;
    while (file >> username >> password >> name >> surname >> dob >> email) {
        User user;
        user.setUsername(username);
        user.setPassword(password);
        user.setName(name);
        user.setSurname(surname);
        user.setDateOfBirth(dob);
        user.setEmail(email);
        users.push_back(user);
    }

    return true; // Load successful
}

// Find a user by their username
std::vector<User>::iterator Database::findUser(const std::string& username) {
    return std::find_if(users.begin(), users.end(), [&username](const User& user) {
        return user.getUsername() == username;
    });
}

// Update user information
void Database::updateUser(const User& user) {
    auto it = findUser(user.getUsername());
    if (it != users.end()) {
        *it = user;
        saveUsersToFile(); // Save users to file after updating a user
    }
}

// Delete a user by their username
void Database::deleteUser(const std::string& username) {
    auto it = findUser(username);
    if (it != users.end()) {
        users.erase(it);
        saveUsersToFile(); // Save users to file after deleting a user
    }
}

// Get the UserAuthentication object associated with this Database
UserAuthentication& Database::getUserAuth() {
    return userAuth;
}

// Set the currently logged-in user
void Database::setLoggedInUser(const User& user) {
    loggedInUser = user; // Assuming loggedInUser is a member variable of type User in Database class
}
