#include <iostream> // Include the iostream library for input/output operations


    // The following code demonstrates the use of conditional (if-else) statements to check the value of 'a' and output corresponding messages.
int main() {
    int a = 5, b = 10; // Declare an integer variable 'a' and initialize it with the value 5

    if(a == 3 || b == 10) { // Check if 'a' is equal to 3 or 'b' is equal to 10
        std::cout << a << " " << b << std::endl; // If true, output a and b
    } 
    else if (a == 5) { // Check if 'a' is equal to 5
        std::cout << "a is equal to 5. \n"; // If true, output "a is equal to 5" \n is a newline character same as std::endl
    }
    else { // If 'a' is not equal to 3 or 5
        std::cout << "no conditions are met \n"; // Output "a is not equal to 3 or 5"
    }

    return 0; // Return 0 to indicate that the program ended successfully
}

