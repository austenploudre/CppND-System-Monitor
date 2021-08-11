#include <string>

#include "format.h"

using std::string;

// Helper function for formatting time
// INPUT: Long int seconds
// OUTPUT: HH:MM:SS

string Format::ElapsedTime(long seconds) {
    long hour = 0;
    long min = 0;
    long secs = 0;
    hour = seconds / 3600;
    min = seconds / 60;
    secs = seconds % 60;

    string time = std::to_string(hour) + ": " +  std::to_string(min) + ": " + std::to_string(secs);

    return time;
}