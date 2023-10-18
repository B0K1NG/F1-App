#include "User.h"
#include <iostream>
#include <conio.h>

// Constructor: Initializes a User object (empty for now)
User::User() {}

// Setter functions to set various user information

void User::setUsername(const std::string& newUsername) {
    username = newUsername;
}

void User::setPassword(const std::string& newPassword) {
    password = newPassword;
}

void User::setName(const std::string& newName) {
    name = newName;
}

void User::setSurname(const std::string& newSurname) {
    surname = newSurname;
}

void User::setDateOfBirth(const std::string& newDob) {
    dob = newDob;
}

void User::setEmail(const std::string& newEmail) {
    email = newEmail;
}

// Getter functions to retrieve user information

const std::string& User::getUsername() const {
    return username;
}

const std::string& User::getPassword() const {
    return password;
}

const std::string& User::getName() const {
    return name;
}

const std::string& User::getSurname() const {
    return surname;
}

const std::string& User::getDateOfBirth() const {
    return dob;
}

const std::string& User::getEmail() const {
    return email;
}

// Function to prompt the user for a password and set it, while showing asterisks for each character

void User::promptAndSetPassword() {
    std::cout << "Enter password (at least 8 characters long): ";
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

    // Check if password length meets the requirement
    if (password.length() < 8) {
        std::cout << "Password must be at least 8 characters long. Please try again.\n";
        password.clear(); // Clear password if not long enough
        promptAndSetPassword(); // Call the function recursively to re-prompt
    }
}

// Function to prompt and set user's name and surname

void User::promptAndSetName() {
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter surname: ";
    std::cin >> surname;
}

// Function to prompt and set user's date of birth, with format validation

void User::promptAndSetDateOfBirth() {
    std::cout << "Enter date of birth (DD/MM/YYYY): ";
    std::cin >> dob;

    if (dob.length() != 10 || dob[2] != '/' || dob[5] != '/') {
        std::cout << "Invalid date format. Please use (DD/MM/YYYY). Please try again.\n";
        dob.clear(); // Clear date of birth if format is invalid
        promptAndSetDateOfBirth(); // Call the function recursively to re-prompt
    }
}

// Function to prompt and set user's email, with format validation

void User::promptAndSetEmail() {
    std::cout << "Enter email (user@example.com): ";
    std::cin >> email;

    if (email.find('@') == std::string::npos || email.find('.') == std::string::npos) {
        std::cout << "Invalid email format. Please use user@example.com. Please try again.\n";
        email.clear(); // Clear email if format is invalid
        promptAndSetEmail(); // Call the function recursively to re-prompt
    }
}
