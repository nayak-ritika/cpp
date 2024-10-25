#include <iostream>
#include <stack>

// Function to insert an element into a sorted stack
void sortedInsert(std::stack<int>& stk, int num) {
    // Base case: If stack is empty or the top element is smaller than num
    if (stk.empty() || stk.top() <= num) {
        stk.push(num);
        return;
    }

    // If the top is greater, pop the top and insert the num recursively
    int temp = stk.top();
    stk.pop();
    sortedInsert(stk, num);

    // Push the popped element back after inserting num
    stk.push(temp);
}

// Function to sort a stack
void sortStack(std::stack<int>& stk) {
    // Base case: If stack is empty, return
    if (stk.empty()) {
        return;
    }

    // Pop the top element
    int num = stk.top();
    stk.pop();

    // Recursively sort the remaining stack
    sortStack(stk);

    // Insert the popped element into the sorted stack
    sortedInsert(stk, num);
}

int main() {
    std::stack<int> stk;
    stk.push(10);
    stk.push(5);
    stk.push(30);
    stk.push(20);
    stk.push(15);

    std::cout << "Stack before sorting: ";
    std::stack<int> temp = stk;  // Make a copy to print
    while (!temp.empty()) {
        std::cout << temp.top() << " ";
        temp.pop();
    }
    std::cout << std::endl;

    // Sort the stack using recursion
    sortStack(stk);

    std::cout << "Stack after sorting: ";
    while (!stk.empty()) {
        std::cout << stk.top() << " ";
        stk.pop();
    }
    std::cout << std::endl;

    return 0;
}


2.

#include <iostream>
#include <stack>

// Function to insert an element into a sorted stack
void sortedInsert(std::stack<int>& stk, int num) {
    // Base case: If stack is empty or the top element is smaller than or equal to num
    if (stk.empty() || stk.top() <= num) {
        stk.push(num);
        return;
    }

    // If the top is greater, pop the top and insert the num recursively
    int temp = stk.top();
    stk.pop();
    sortedInsert(stk, num);

    // Push the popped element back after inserting num
    stk.push(temp);
}

// Function to sort a stack
void sortStack(std::stack<int>& stk) {
    // Base case: If the stack has less than 2 elements, return
    if (stk.size() < 2) {
        return;
    }

    // Pop the top element and store it
    int num = stk.top();
    stk.pop();

    // Recursively sort the remaining stack
    sortStack(stk);

    // Insert the popped element into the sorted stack
    sortedInsert(stk, num);
}

int main() {
    std::stack<int> stk;
    stk.push(10);
    stk.push(5);
    stk.push(30);
    stk.push(20);
    stk.push(15);

    std::cout << "Stack before sorting: ";
    std::stack<int> temp = stk;  // Make a copy to print
    while (!temp.empty()) {
        std::cout << temp.top() << " ";
        temp.pop();
    }
    std::cout << std::endl;

    // Sort the stack using recursion
    sortStack(stk);

    std::cout << "Stack after sorting: ";
    while (!stk.empty()) {
        std::cout << stk.top() << " ";
        stk.pop();
    }
    std::cout << std::endl;

    return 0;
}

3.
#include <stack>

template<typename T>
void sortAStack(std::stack<T>& s) {
    // Base case: If the stack has fewer than 2 elements, it's already sorted.
    if(s.size() < 2) {
        return;
    }

    // Store the top element and remove it from the stack.
    T num = s.top();
    s.pop();

    // Recursively sort the remaining stack.
    sortAStack(s);

    // If the top of the sorted stack is less than or equal to the stored element,
    // push the stored element back onto the stack.
    if(s.empty() || s.top() <= num) {
        s.push(num);
    }
    // If the top element is greater, swap and continue sorting.
    else {
        T temp = s.top();
        s.pop();
        s.push(num);
        sortAStack(s);  // Recurse to sort again after swapping.
        s.push(temp);
    }
}


//
#include <vector> // Include the vector library for potential future use

// Template function to sort a stack of any data type T
template<typename T> 
void sortAStack(std::stack<T>& s) {
    
    // Base condition: if the stack has less than two elements, it's already sorted
    if(s.size() < 2) {
        return;
    }

    // Step 1: Remove the top element and store it in 'num'
    T num = s.top();
    s.pop();

    // Recursive call to sort the remaining stack
    sortAStack(s);

    // Step 2: After the recursive call, insert 'num' back into its correct position
    // If the stack is empty or the top element is larger than or equal to 'num', push 'num' back
    if(s.size() == 0 || s.top() >= num) {
        s.push(num);
    }
    // If the top element is smaller than 'num', pop it, push 'num', then push the smaller element back
    else {
        T value = s.top(); // Store the top element temporarily
        s.pop();
        s.push(num); // Push 'num' first, which is larger
        s.push(value); // Push the smaller element back on top
        sortAStack(s); // Recursively sort the stack
    }
}
