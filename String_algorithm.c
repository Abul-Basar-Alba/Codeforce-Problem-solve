#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_DESC_LENGTH 100

// Structure to represent a task
typedef struct {
    int id;
    char description[MAX_DESC_LENGTH];
    int completed;
} Task;

Task tasks[MAX_TASKS]; // Array to store tasks
int numTasks = 0; // Number of tasks currently stored

// Function to add a new task
void addTask() {
    if (numTasks < MAX_TASKS) {
        Task newTask;
        newTask.id = numTasks + 1;
        printf("Enter task description: ");
        getchar(); // Clear input buffer
        fgets(newTask.description, MAX_DESC_LENGTH, stdin);
        newTask.description[strcspn(newTask.description, "\n")] = '\0'; // Remove newline character
        newTask.completed = 0; // New task is not completed by default
        tasks[numTasks++] = newTask;
        printf("Task added successfully!\n");
    } else {
        printf("Sorry, the maximum number of tasks has been reached.\n");
    }
}

// Function to mark a task as completed
void completeTask(int taskId) {
    if (taskId > 0 && taskId <= numTasks) {
        tasks[taskId - 1].completed = 1;
        printf("Task marked as completed.\n");
    } else {
        printf("Invalid task ID.\n");
    }
}

// Function to display all tasks
void displayTasks() {
    printf("Tasks:\n");
    printf("ID\tDescription\t\tCompleted\n");
    for (int i = 0; i < numTasks; i++) {
        printf("%d\t%s\t\t%s\n", tasks[i].id, tasks[i].description, tasks[i].completed ? "Yes" : "No");
    }
}

int main() {
    int choice;
    int taskId; // Declare taskId outside the switch block
    do {
        printf("\nTo-Do List Manager\n");
        printf("1. Add Task\n");
        printf("2. Complete Task\n");
        printf("3. View Tasks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addTask();
                break;
            case 2:
                printf("Enter the ID of the task to mark as completed: ");
                scanf("%d", &taskId); // Move taskId assignment here
                completeTask(taskId);
                break;
            case 3:
                displayTasks();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
