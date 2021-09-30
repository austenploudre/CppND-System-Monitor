#include "ncurses_display.h"
#include "system.h"

int main() {
  System system;
  NCursesDisplay::Display(system);
}

//SOURCES:
//https://knowledge.udacity.com/questions/96882
//https://knowledge.udacity.com/questions/94411
//https://knowledge.udacity.com/questions/49042
//https://stackoverflow.com/questions/1420426/how-to-calculate-the-cpu-usage-of-a-process-by-pid-in-linux-from-c0
//https://en.cppreference.com/w/cpp/string/basic_string/stol
//https://www.tutorialspoint.com/cplusplus/relational_operators_overloading.htm