#include <iostream> // Include the iostream library for input/output operations
#include <vector> // Include the vector library for using the std::vector container

// This program demonstrates the use of pointers and vectors in C++. It declares an integer variable and a pointer to an integer, assigns values, and outputs the value using the pointer. It also demonstrates the use of a vector of doubles and a pointer to that vector.
int main() {
    int a, *b; // Declare an integer variable 'a' and a pointer to an integer 'b'. a pointer is a variable that holds the memory address of another variable. In this case, 'b' will hold the address of an integer variable.
    a = 4;
    
    b = &a; // Assign the address of 'a' to the pointer 'b'. The '&' operator is used to get the address of a variable. Now, 'b' points to 'a', meaning that 'b' holds the memory address where 'a' is stored.

    std::cout << *b << std::endl; // Output the value of 'a' to the console. The '<<' operator is used to insert data into the output stream. 'std::endl' is used to insert a newline character and flush the output buffer.

    std::vector<double> vec1(3,3.1), *vec2; // Declare a vector of doubles named 'vec' with 3 elements initialized to 3.1, and a pointer to a vector of doubles named 'vec2'.
    vec2 = &vec1; // Assign the address of 'vec1' to the pointer 'vec2'. Now, 'vec2' points to 'vec1', meaning that 'vec2' holds the memory address where 'vec1' is stored.

    return 0; // Return 0 to indicate successful execution
}
