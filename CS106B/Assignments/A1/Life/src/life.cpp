// This is the CPP file you will edit and turn in.
// Also remove these comments here and add your own.
// TODO: remove this comment header!

#include <cctype>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "console.h"
#include "filelib.h"
#include "grid.h"
#include "gwindow.h"
#include "simpio.h"
#include "strlib.h"
#include "lifegui.h"
using namespace std;
/* Funtion Prototypes*/
void intro();

Grid<char> mygrid = Grid<char>();

int main() {
    // TODO: Finish the program!

    void intro(); // Part 1. The Introduction

    // Input file name:
    string fname;
    cout << "Gird input file name? " ;

    while (true) {
        cin >> fname;
        if (fileExists(fname) == false){
            cout << "Invalid file name. Please try again."<< endl;
        }
        else break;
    }

    //Read the input file to a grid object

    // Options of wrapping or not
    char wrapping;
    cout << "Should the simulation wrap around the grid (y/n)? ";
    cin >> wrapping;




    //Placeholder for grid display;
    //TODO: replace this block with a function calls initial grid play

    cout << "I am a placeholder for the initial state of the input grid !"<<endl;

    while(true){
        char fwdOption;
        cout << "a)nimate, t)ick, q)uit? ";
        cin >> fwdOption;

        if (fwdOption == 'q') break;
        //Placeholder for next generation grid;
        //TODO: replace this block to call similation
        cout << "I am a placeholder for the similation grids" << endl;

    }

    cout << "Have a nice Life!" << endl;
    return 0;
}

void intro(){
    cout << "Welcome to xiaozhenliu's version of CS106B Spring 2017 Game of Life" << endl;
    cout << "a simulation of the lifecycle of a bacteria colony." << endl;
    cout << "Cells (X) live and die by the following rules:" << endl;
    cout << "- A cell with 1 or fewer neighbors dies" << endl;
    cout << "- Locations with 2 neighbors remain stable" << endl;
    cout << "- Locations with 3 neightbors will create life" << endl;
    cout << "- A cell with 4 or more neighbors dies." << endl;

}
