//
//  main.cpp
//  Homework_1_Aww_Geez_Man
//
//  Created by Patrick Procter on 9/27/20.
//  Copyright © 2020 Procter Industries. All rights reserved.
//

/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/

// Include the Morty header file
#include "Morty.hpp" //CHANGE ME

using namespace std;

// =========================================================================== //
//          Define functions enclosed in Namespace C137 here
// =========================================================================== //



// =========================================================================== //
//          Define functions enclosed in Namespace Z286 here
// =========================================================================== // 




int main(int argc, char*argv[]) {
    
    if (argc == 4) {
        
        if (strcmp(argv[3], "C137") == 0) {
            using namespace C137;
            C137::Morty(atoi(argv[1]), atoi(argv[2]), argv[3]);
        }
        else if (strcmp(argv[3], "Z286") == 0) {
            using namespace Z286;
            Z286::Morty(atoi(argv[1]), atoi(argv[2]), argv[3]);
        }
    }
    
    else if (argc == 5) {
        if (strcmp(argv[4], "C137") == 0) {
            using namespace C137;
            C137::Morty(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), argv[4]);
        }
        else if (strcmp(argv[4], "Z286") == 0) {
            using namespace Z286;
            Z286::Morty(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), argv[4]);
        }
    }
    
    else {
        cout << "Input error" << endl;
        return -1;
    }

     
    return 0;
}
