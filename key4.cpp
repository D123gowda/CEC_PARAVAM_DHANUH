#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string *names = new string[n];

    cout << "Enter student names:\n";
    cin.ignore();
    for(int i =  0; i < n; i++){
        cout <<"Student "<< i + 1 << ": ";
        getline(cin, names[i]);
    }

    string choice;
    do {
    string keyname;
    cout << "\nEnter the name to search: ";
    cin.ignore();
    getline(cin, keyname);

    bool found = false;
    for(int i = 0; i < n; i++){
        if(names[i] == keyname){
            cout << "Student \"" <<  keyname << "\" found at position" << i + 1 << "." << endl;
            found = true;
            break;
        }
    }

    if (!found){
        cout << "Student \"" << keyname << "\" not found in the list." << endl;
    }

    cout  << "\nDo you want to search for another student? (yes/no): ";
    cin >> choice;

 } while (choice == "yes" || choice == "yes");

 cout << "Exit" << endl;

    delete[] names;
    return 0;
}