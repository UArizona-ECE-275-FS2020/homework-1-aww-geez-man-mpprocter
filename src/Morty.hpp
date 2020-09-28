//
//  main.hpp
//  Homework_1_Aww_Geez_Man
//
//  Created by Patrick Procter on 9/27/20.
//  Copyright © 2020 Procter Industries. All rights reserved.
//

/*
 __  __            _               _
|  \/  | ___  _ __| |_ _   _      | |__  _ __  _ __
| |\/| |/ _ \| '__| __| | | |     | '_ \| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | | | | |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_) |_| |_| .__/| .__/
                       |___/            |_|   |_|
*/

#include <string>
#include <iostream>


/* Extra credit below:
namespace interdimensional {
    // Declare enumeration to hold the dimensions each Morty is from
    enum dimension {UNKNOWN = -1, C137, Z286};
    
    // Declare a structure to hold the arguments passed to the function
    struct args {
        int start;
        int stop;
        int step;
        dimension dim;
    };
    
    // Declare a function to parse the args and return the above declared structure
    args parseArgs(int c, char** v);
    
}
*/

// =========================================================================== //
//          Declare Namespace C137 and enclosed functions here
// ===*======================================================================== //

namespace C137 {

void Morty(int start, int stop, std::string dimension) {
    std::cout << "Morty C137 says:" << std::endl;
    
    for (int i = start; i <= stop; i++) {
        std::cout << i << ": ";
        if ((i % 15) == 0) {
            std::cout << "Aww Geez Man" << std::endl;
        }
        else if ((i % 5) == 0) {
            std::cout << "Geez" << std::endl;
        }
        else if ((i % 3) == 0) {
            std::cout << "Aww" << std::endl;
        }
        else {
            std::cout << std::endl;
        }
    }
}

void Morty(int start, int stop, int step, std::string dimension) {
    for (int i = start; i <= stop; i+=step) {
        std::cout << i << ": ";
        if ((i % 15) == 0) {
            std::cout << "Aww Geez Man" << std::endl;
        }
        else if ((i % 5) == 0) {
            std::cout << "Geez" << std::endl;
        }
        else if ((i % 3) == 0) {
            std::cout << "Aww" << std::endl;
        }
        else {
            std::cout << std::endl;
        }
    }
}
}



// =========================================================================== //
//          Declare Namespace Z286 and enclosed functions here
// =========================================================================== //

namespace Z286 {
/*int start; //sets start number based on function
int stop; //sets start number based on function
int step; //sets step size
std::string dimension;
*/
void Morty(int start, int stop, std::string dimension){
    std::cout << "Morty Z286 says:" << std::endl;
    
    for (int i = start; i <= stop; i++) {
        std::cout << i << ": ";
        if ((i % 15) == 0) {
            std::cout << "naM zeeG wwA" << std::endl;
        }
        else if ((i % 5) == 0) {
            std::cout << "zeeG" << std::endl;
        }
        else if ((i % 3) == 0) {
            std::cout << "wwA" << std::endl;
        }
        else {
            std::cout << std::endl;
        }
    }
}

void Morty(int start, int stop, int step, std::string dimension) {
    for (int i = start; i <= stop; i+=step) {
        std::cout << i << ": ";
        if ((i % 15) == 0) {
            std::cout << "naM zeeG wwA" << std::endl;
        }
        else if ((i % 5) == 0) {
            std::cout << "zeeG" << std::endl;
        }
        else if ((i % 3) == 0) {
            std::cout << "wwA" << std::endl;
        }
        else {
            std::cout << std::endl;
        }
    }
}
}

