#include "Menu.h" // Include the Menu class header file
#include <iostream>

int main() {
    Menu menu; // Create an instance of the Menu class
    int choice; // Variable to store user's choice

    while (true) {
        if (menu.getUserAuthentication().isLoggedIn()) {
            menu.displayLoggedInMenu(); // Display menu for logged-in users
        } else {
            menu.displayMenu(); // Display menu for users who are not logged in
        }

        std::cin >> choice; // Get user's choice

        if (menu.userSignedOut()) {
            menu.resetSignedOut(); // Reset signed-out status and continue loop
            continue;
        }

        switch (choice) {
            case 1:
                menu.registerUser(); // Option to register a new user
                break;
            case 2:
                menu.loginUser(); // Option to login
                break;
            case 3:
                menu.quit(); // Option to quit the program
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n"; // Invalid choice handling
                break;
        }
    }

    return 0;
}
