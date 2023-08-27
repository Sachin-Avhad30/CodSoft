//Task 4 : ToDo List

#include<iostream>
#include<string>
using namespace std;

class node {
    public:
    string task;
    string status;
    node* next;

    node(string task1) {
        this->task = task1;
        this->status = "Pending";
        this->next = NULL;
    }
};
class List {
    public:
    string tasks;
    node* head = NULL;

    //for input of task
    string input_Task(){
        cin.ignore();
        cout << "Enter the task:";
        getline(cin, tasks);
        return tasks;
    }
    //Adding the new task
    void add_the_Task() {
        List : input_Task();
            
        struct node* newNode = new node(tasks);
        if(head == NULL) {
            head = newNode;
            cout << "Task Added Succesfully...." << endl;
            return;
        }
        else{
            node *Temp;
            Temp = head;
            while(Temp -> next != NULL){
                Temp = Temp -> next;
            }
            Temp -> next = newNode;
            cout << "Task Added Succesfully...." << endl;
        }
        
    }
    //Updating the status of task
    void updateTask(int position) {
    
        int current_position = 0;

        node* temp = head;
        while(current_position != position){
           temp = temp -> next;
           current_position++;
        }
        temp->status ="Complete";

        cout << "Task is marked as complete succesfully......" << endl;
    }

    //Removing the task
    void DeleteTask(int position) {
   
        int current_position = 0;
        node* prev = head;
        if(position == 0) {
            head = head -> next;
            free(prev);
            cout << "\nTask delete succesfully..." << endl;
            return;
        }
        while(current_position != position - 1){
            prev = prev -> next;
            current_position++;
        }
        node* temp = prev -> next;
        prev -> next = prev -> next -> next;
        free(temp);
        cout << "\nTask delete succesfully..." << endl;
    }
    //Displaying the task in the list with there staus
    void Display() {
        struct node *temp;
        temp = head;
        cout << "_____****To Do List****_____" << endl;
        cout << endl;
        int i = 0;
        while(temp != NULL){
            cout << i << ") Work : " << temp -> task << " = status :" << temp -> status;
            cout << endl;
            temp = temp -> next;
            i++;
        }
        cout << "\n_____________________________________________________" << endl;
    }
};


int main() {
    List l1;
    int iChoice,position;
    
    do {
        cout << "_______________________________________________________" <<endl;
        cout << "1)Add the new task \n2)Mark the task as Completed \n3)Displaying the task withe there Status \n4)Remove the task from the list \n5)Exit from program" << endl;
        cout << "_______________________________________________________" <<endl;
        cout << "what to you want to do? -> ";
        cin >> iChoice;
        cout << "\n_____________________________________________________" << endl;
        switch(iChoice) {
            case 1:
                l1.add_the_Task();
                break;

            case 2:
                cout << "Enter the position of task on which task mark as completed:";
                cin >> position;
                l1.updateTask(position);
                break;

            case 3:
                l1.Display();
                break;

             case 4:
                cout << "Enter the position of task which is deleted:";
                cin >> position;
                l1.DeleteTask(position);
                break;

            case 5:
                cout << "Exit...." << endl;
                break;     
        }
    }while(iChoice != 5);

    return 0;
}