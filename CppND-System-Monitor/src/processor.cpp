#include "processor.h"
#include "linux_parser.h"

// Return the aggregate CPU utilization
double Processor::Utilization() {
  long active = LinuxParser::ActiveJiffies();
  long total = LinuxParser::Jiffies();
  return active * (1.f / total);
}