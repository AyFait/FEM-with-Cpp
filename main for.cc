#include <iostream> // Include the iostream library for input/output operations


// The following code demonstrates the use of "for" loops to iterate over a range of numbers and output them to the console. for(declaration; condition; increment/decrement) { // loop body }

int main() {
        for(int i=0; i<5; i++) { // Loop from 0 to 4, incrementing 'i' by 1 in each iteration (i++ is same as i = i + 1, i += 1)
            std::cout << i <<" "; // Output the current value of 'i' followed by a space
            std::cout << i << std::endl; // Output the current value of 'i' followed by a newline
        }
        return 0;
    }
