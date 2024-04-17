#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Structure for Task
struct Task {
    string description;
    bool completed;
};


void addTask(vector<Task>& todoList, const string& description) {
    Task newTask;
    newTask.description = description;
    newTask.completed = false;
    todoList.push_back(newTask);
    cout << "Task added successfully!" << endl;
}

//A function to delete a task 
void deleteTask(vector<Task>& todoList, int index) {
    if (index >= 0 && index < todoList.size()) {
        todoList.erase(todoList.begin() + index);
        cout << "Task deleted successfully!" << endl;
    } else {
        cout << "Invalid task index!" << endl;
    }
}

// Function to mark the completion
void markCompleted(vector<Task>& todoList, int index) {
    if (index >= 0 && index < todoList.size()) {
        todoList[index].completed = true;
        cout << "Task marked as completed!" << endl;
    } else {
        cout << "Invalid task index!" << endl;
    }
}

// Function to display the list
void displayList(const vector<Task>& todoList) {
    cout << "To-Do List:" << endl;
    for (size_t i = 0; i < todoList.size(); ++i) {
        cout << i+1 << ". ";
        if (todoList[i].completed)
            cout << "[X] ";
        else
            cout << "[ ] ";
        cout << todoList[i].description << endl;
    }
}

int main() {
    vector<Task> todoList;
    string description;
    int choice, index;

    cout << "Welcome to the To-Do List Program!" << endl;

    while (true) {
        cout << "\nChoose the following option:" << endl;
        cout << "1. Add  the task" << endl;
        cout << "2. Delete the task" << endl;
        cout << "3. Mark task as Completed" << endl;
        cout << "4. Display the List" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter description of task: ";
                cin.ignore(); 
                getline(cin, description);
                addTask(todoList, description);
                break;
            case 2:
                cout << "Enter task index for deletion: ";
                cin >> index;
                deleteTask(todoList, index-1); 
                break;
            case 3:
                cout << "Enter task index to mark as complete: ";
                cin >> index;
                markCompleted(todoList, index-1);
                break;
            case 4:
                displayList(todoList);
                break;
            case 5:
                cout << "Exit program." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
