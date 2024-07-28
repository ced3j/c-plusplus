#include <iostream>
#include <string>
using namespace std;

const int MAX_CONTACTS = 100;


// Define a Contact structure
struct Contact {
    string name;
    string phoneNumber;
    string email;
};


// Function declarations
void addContact(Contact contacts[], int &numContacts);
void displayContacts(const Contact contacts[], int numContacts);
void searchContact(const Contact contacts[], int numContacts);



int main() {
    Contact contacts[MAX_CONTACTS];
    int numContacts = 0;
    int choice;

    do {
        cout << "Contact Book Menu:\n";
        cout << "1. Add a contact\n";
        cout << "2. Display all contacts\n";
        cout << "3. Search for a contact\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Clear the input buffer

        if (choice == 1) {
            addContact(contacts, numContacts);
        } else if (choice == 2) {
            displayContacts(contacts, numContacts);
        } else if (choice == 3) {
            searchContact(contacts, numContacts);
        } else if (choice == 4) {
            cout << "Exiting...\n";
        } else {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}



// Function to add a contact
void addContact(Contact contacts[], int &numContacts) {
    if (numContacts < MAX_CONTACTS) {
        cout << "Enter contact name: ";
        getline(cin, contacts[numContacts].name);
        cout << "Enter phone number: ";
        getline(cin, contacts[numContacts].phoneNumber);
        cout << "Enter email: ";
        getline(cin, contacts[numContacts].email);
        numContacts++;
    } else {
        cout << "Contact list is full!\n";
    }
}


// Function to display all contacts
void displayContacts(const Contact contacts[], int numContacts) {
    if (numContacts == 0) {
        cout << "No contacts to display!\n";
        return;
    }
    for (int i = 0; i < numContacts; ++i) {
        cout << "Contact " << i + 1 << ":\n";
        cout << "Name: " << contacts[i].name << "\n";
        cout << "Phone Number: " << contacts[i].phoneNumber << "\n";
        cout << "Email: " << contacts[i].email << "\n";
        cout << "-------------------------\n";
    }
}

// Function to search for a contact by name
void searchContact(const Contact contacts[], int numContacts) {
    if (numContacts == 0) {
        cout << "No contacts available to search!\n";
        return;
    }
    string searchName;
    cout << "Enter the name to search: ";
    getline(cin, searchName);

    bool found = false;
    for (int i = 0; i < numContacts; ++i) {
        if (contacts[i].name == searchName) {
            cout << "Contact found:\n";
            cout << "Name: " << contacts[i].name << "\n";
            cout << "Phone Number: " << contacts[i].phoneNumber << "\n";
            cout << "Email: " << contacts[i].email << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Contact not found.\n";
    }
}
