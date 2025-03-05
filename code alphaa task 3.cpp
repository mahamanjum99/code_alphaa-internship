//CODE ALPHAA
//TASK 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to register a user
void registerUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;

    ifstream checkFile(username + ".txt");
    if (checkFile) {
        cout << "Username already exists! Try again.\n";
        return;
    }

    cout << "Enter password: ";
    cin >> password;

    ofstream file(username + ".txt");
    file << username << endl << password;
    file.close();

    cout << "Registration successful!\n";
}

// Function to login a user
bool loginUser() {
    string username, password, storedUser, storedPass;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file(username + ".txt");
    if (!file) {
        cout << "User not found! Please register first.\n";
        return false;
    }

    getline(file, storedUser);
    getline(file, storedPass);
    file.close();

    if (username == storedUser && password == storedPass) {
        cout << "Login successful!\n";
        return true;
    } else {
        cout << "Incorrect password!\n";
        return false;
    }
}

// Function to recover password
void recoverPassword() {
    string username, storedUser, storedPass;
    cout << "Enter your username: ";
    cin >> username;

    ifstream file(username + ".txt");
    if (!file) {
        cout << "User not found!\n";
        return;
    }

    getline(file, storedUser);
    getline(file, storedPass);
    file.close();

    cout << "Your password is: " << storedPass << endl;
}

// Main function
int main() {
    int choice;
    while (true) {
        cout << "\n1. Register\n2. Login\n3. Forgot Password\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                loginUser();
                break;
            case 3:
                recoverPassword();
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}

