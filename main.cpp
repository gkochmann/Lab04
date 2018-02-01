/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: grant
 *
 * Created on January 31, 2018, 5:03 PM
 */

#include <MMU.h>
#include "ProcessTrace.h"
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // Check for argument
    if (argc != 2) {
        cerr << "Argument not specified." << endl;
        exit(1);
    }
    // Create instance of ProcessTrace
    ProcessTrace trace(argv[1]);
    // Call Execute method
    trace.Execute();
    
    return 0;
}

