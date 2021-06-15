//  Created by Salman Naqvi on 14/06/2021.

#include <iostream>

int main() {
    
    // Print welcome messages to the terminal.
    std::cout << "You are an agent attempting to disarm a nuclear weapon." << std::endl;
    std::cout << std::endl << "You must input the correct 3 number code to prevent the weapon from activating." << std::endl;
    
    // Declare three number code.
    const int CodeA = 7;
    const int CodeB = 6;
    const int CodeC = 5;
    
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    
    // Print CodeSum and CodeProduct to the terminal.
    std::cout << std::endl << "The sum of the three numbers is " << CodeSum << "." << std::endl;
    std::cout << "The product of the three numbers is " << CodeProduct << "." << std::endl;
    
    int GuessA;
    int GuessB;
    int GuessC;
    std::cout << std::endl << "Enter your guess: ";
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    return 0;
}
