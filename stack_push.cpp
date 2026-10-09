
#include <iostream>
using namespace std;

int main() {
    int stack[100], n, top = -1, element;

    cout << "Enter stack size: ";
    cin >> n;

    cout << "Enter element to push: ";
    cin >> element;

    if (n <= 0 || n > 100) {
        cout << "Invalid stack size!";
        return 0;
    }

    if (top == n - 1) {
        cout << "Stack Overflow!";
    } else {
        top++;
        stack[top] = element;
        cout << "Element pushed successfully!";
    }

    cout << "\nStack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << endl;
    }

    return 0;
}

