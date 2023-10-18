#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    // Private member variables to store user information
    std::string username;
    std::string password;
    std::string name;
    std::string surname;
    std::string dob;
    std::string email;

public:
    // Constructor
    User();

    // Setter functions to assign values to private member variables
    void setUsername(const std::string& newUsername);
    void setPassword(const std::string& newPassword);
    void setName(const std::string& newName);
    void setSurname(const std::string& newSurname);
    void setDateOfBirth(const std::string& newDob);
    void setEmail(const std::string& newEmail);

    // Getter functions to retrieve values of private member variables
    const std::string& getUsername() const;
    const std::string& getPassword() const;
    const std::string& getName() const;
    const std::string& getSurname() const;
    const std::string& getDateOfBirth() const;
    const std::string& getEmail() const;

    // Interactive functions for user input
    void promptAndSetPassword();
    void promptAndSetName();
    void promptAndSetDateOfBirth();
    void promptAndSetEmail();
};

#endif // USER_H
