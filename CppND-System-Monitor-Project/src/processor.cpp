#include "processor.h"
#include "linux_parser.h"

// Return the aggregate CPU utilization
float Processor::Utilization() {
  long active = LinuxParser::ActiveJiffies();
  long total = LinuxParser::Jiffies();
  return active * (1.f / total);
}