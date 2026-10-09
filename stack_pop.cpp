
#include <iostream>
using namespace std;

int main() {
    int stack[100], n, top = -1;

    cout << "Enter size of stack: ";
    cin >> n;

    cout << "Enter stack elements: ";
    for (int i = 0; i < n; i++) {
        cin >> stack[i];
        top++;
    }

    if (top == -1) {
        cout << "Stack Underflow";
    } else {
        cout << "Deleted element: " << stack[top] << endl;
        top--;

        cout << "Stack after POP: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
    }

    return 0;
}

