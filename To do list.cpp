#include <iostream>
#include <vector>
#include <limits>
#include <string>
using namespace std;

int number = 1;

class Task {
public:
    void add(const string& item, vector<string>& List) {
        List.push_back(item);
    }

    void display(const vector<string>& List) {
        for (long int i = 0; i < List.size(); i++) {
            cout << "Task number " << number << " is: " << List[i] << "\n";
            number++;
        }
        number = 1; // Reset the task number after displaying
    }

    void Mark_as_Done(vector<string>& List) {
        cout << "Please enter the name of the task that you have completed: ";
        string done;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, done);
        bool found = false;
        for (long int i = 0; i < List.size(); i++) {
            if (List[i] == done) {
                found = true;
                cout<<List[i]<<" marked as done"<<endl;
                List[i] = done + " (Done)";
                break;
            }
        }
        if (!found) {
            cout << done << " is not in the list.\n";
        }
    }

    bool remove_from_list(vector<string>& List) {
        cout << "Please enter the name of the task that you want to remove: ";
        string name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, name);
        
        bool found = false;
        for (long int i = 0; i < List.size(); ++i) {
            if (List[i] == name || List[i] == name + " (Done)") {
                List.erase(List.begin() + i);
                found = true;
                break;
            }
        }

        if (found) {
            cout << name << " has been removed from the list.\n";
            return true;
        } else {
            cout << name << " is not in the list.\n";
            return false;
        }
    }
};

int main() {
    vector<string> List;
    Task task;

    while (true) {
        int choice;
        cout << "                ***TO DO LIST ***" << endl;
        cout << " 1-Append a task to the list \n 2-Display List \n 3-Mark as complete \n 4-remove task" << endl;
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error" << endl;
            continue;
        }

        if (choice == 1) {
            cout << "Enter the number of tasks you want to append: " << endl;
            int n;
            cin >> n;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            for (int i = 0; i < n; i++) {
                string item;
                cout << "Enter the task you want to insert: " << endl;
                getline(cin, item);
                task.add(item, List);
            }
        } else if (choice == 2) {
            if (List.empty()) {
                cout << "List is empty" << endl;
            } else {
                task.display(List);
            }
        } else if (choice == 3) {
            task.Mark_as_Done(List);
        } else if (choice == 4) {
            task.remove_from_list(List);
        }
    }

    return 0;
}
