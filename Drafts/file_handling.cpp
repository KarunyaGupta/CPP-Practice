#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class FileHandler {
private:
    string filename;

public:
    FileHandler(string filename) {
        this->filename = filename;
    }

    void createFile() {
        ofstream file(this->filename);
        if (file.is_open()) {
            cout << "File created successfully!" << endl;
            file.close();
        } else {
            cout << "Unable to create file!" << endl;
        }
    }

    void writeDataToFile() {
        ofstream file(this->filename);
        if (file.is_open()) {
            string data;
            cout << "Enter data to write into file: ";
            getline(cin, data);
            file << data << endl;
            file.close();
            cout << "Data written into file successfully!" << endl;
        } else {
            cout << "Unable to open file!" << endl;
        }
    }

    void readDataFromFile() {
        ifstream file(this->filename);
        if (file.is_open()) {
            string line;
            cout << "Data from file:" << endl;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        } else {
            cout << "Unable to open file!" << endl;
        }
    }

    void appendDataToFile() {
        ofstream file(this->filename, ios::app);
        if (file.is_open()) {
            string data;
            cout << "Enter data to append into file: ";
            getline(cin, data);
            file << data << endl;
            file.close();
            cout << "Data appended into file successfully!" << endl;
        } else {
            cout << "Unable to open file!" << endl;
        }
    }
};

int main() {
    string filename;
    cout << "Enter filename: ";
    getline(cin, filename);

    FileHandler fileHandler(filename);

    int choice;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Create file" << endl;
        cout << "2. Write data into file" << endl;
        cout << "3. Read data from file" << endl;
        cout << "4. Append data into file" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                fileHandler.createFile();
                break;
            case 2:
                fileHandler.writeDataToFile();
                break;
            case 3:
                fileHandler.readDataFromFile();
                break;
            case 4:
                fileHandler.appendDataToFile();
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}