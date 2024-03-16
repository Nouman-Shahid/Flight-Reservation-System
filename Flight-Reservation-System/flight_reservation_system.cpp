#include <iostream>
#include <string>

using namespace std;

struct Passenger {
    int id;
    string name;
    string flightDetails;
    bool isPaid;
    Passenger* next;
};

class PassengerList {
private:
    Passenger* head;
    int capacity;
    int count;

public:
    PassengerList(int planeCapacity) : head(nullptr), capacity(planeCapacity), count(0) {}

    void addPassenger() {
        if (count >= capacity) {
            cout << "No available seats. Cannot add passenger." << endl;
            return;
        }

        Passenger* newPassenger = new Passenger;

        cout << "Enter passenger ID: ";
        cin >> newPassenger->id;
        cin.ignore();

        cout << "Enter passenger name: ";
        getline(cin, newPassenger->name);

        cout << "Enter flight details: ";
        getline(cin, newPassenger->flightDetails);

        cout << "Enter payment status (1 for paid, 0 for unpaid): ";
        cin >> newPassenger->isPaid;

        newPassenger->next = nullptr;

        if (head == nullptr) {
            head = newPassenger;
        } else {
            Passenger* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newPassenger;
        }

        cout << "Passenger " << newPassenger->name << " added to the list." << endl;
        count++;
    }

    void deletePassenger() {
        if (head == nullptr) {
            cout << "Passenger list is empty. No passengers to delete." << endl;
            return;
        }

        int id;
        cout << "Enter passenger ID to delete: ";
        cin >> id;

        if (head->id == id) {
            Passenger* temp = head;
            head = head->next;
            delete temp;
            cout << "Passenger with ID " << id << " deleted from the list." << endl;
            count--;
            return;
        }

        Passenger* prev = head;
        Passenger* current = head->next;
        while (current != nullptr) {
            if (current->id == id) {
                prev->next = current->next;
                delete current;
                cout << "Passenger with ID " << id << " deleted from the list." << endl;
                count--;
                return;
            }
            prev = current;
            current = current->next;
        }

        cout << "Passenger with ID " << id << " not found in the list." << endl;
    }

    void searchPassenger() {
        if (head == nullptr) {
            cout << "Passenger list is empty." << endl;
            return;
        }

        string name;
        cout << "Enter passenger name to search: ";
        cin.ignore();
        getline(cin, name);

        Passenger* current = head;
        while (current != nullptr) {
            if (current->name == name) {
                cout << "Passenger found:" << endl;
                cout << "Name: " << current->name << ", Flight Details: " << current->flightDetails;
                cout << (current->isPaid ? " (Paid)" : " (Unpaid)") << endl;
                return;
            }
            current = current->next;
        }

        cout << "Passenger not found in the list." << endl;
    }

    void editPassenger() {
        if (head == nullptr) {
            cout << "Passenger list is empty. No passengers to edit." << endl;
            return;
        }

        string name;
        cout << "Enter passenger name to edit: ";
        cin.ignore();
        getline(cin, name);

        Passenger* current = head;
        while (current != nullptr) {
            if (current->name == name) {
                string newFlightDetails;
                cout << "Enter new flight details: ";
                getline(cin, newFlightDetails);
                current->flightDetails = newFlightDetails;
                cout << "Passenger " << current->name << " updated with new flight details." << endl;
                return;
            }
            current = current->next;
        }

        cout << "Passenger " << name << " not found in the list." << endl;
    }

    void displayPassengers() {
        if (head == nullptr) {
            cout << "Passenger list is empty." << endl;
        } else {
            cout << "Passenger List:" << endl;
            Passenger* current = head;
            int seatNumber = 1;
            while (current != nullptr) {
                cout << "Seat " << seatNumber << ": ";
                cout << "Name: " << current->name << ", Flight Details: " << current->flightDetails;
                cout << (current->isPaid ? " (Paid)" : " (Unpaid)") << endl;
                current = current->next;
                seatNumber++;
            }
        }
    }
};

int main() {
    int capacity;
    cout << "Enter the capacity of the plane: ";
    cin >> capacity;

    PassengerList passengerList(capacity);
    int choice;

    do {
        cout << "Flight Reservation System Menu\n"
             << "1. Add Passenger\n"
             << "2. Delete Passenger\n"
             << "3. Search Passenger\n"
             << "4. Edit Passenger\n"
             << "5. Display Passengers\n"
             << "6. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                passengerList.addPassenger();
                break;
            case 2:
                passengerList.deletePassenger();
                break;
            case 3:
                passengerList.searchPassenger();
                break;
            case 4:
                passengerList.editPassenger();
                break;
            case 5:
                passengerList.displayPassengers();
                break;
            case 6:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << endl;

    } while (choice != 6);

    return 0;
}
