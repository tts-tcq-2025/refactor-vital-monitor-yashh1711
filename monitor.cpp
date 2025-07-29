#include "monitor.h"
#include "loader.h"
#include "printResult.h"
#include "checkVitals.h"
#include <iostream>
#include <assert.h>
#include <string>

using std::cout, std::endl;

int vitalsOk(float temperature, float pulseRate, float spo2)
{
  int currTemp = checkTemperature(temperature);
  int currPulse = checkPulse(pulseRate);
  int currspo2 = checkspo2(spo2);

  printVital("Temperature", currTemp);
  printVital("Pulse Rate", currPulse);
  printVital("SPO2", currspo2);

  callLoader();

  if ((currTemp == 0 || currTemp == 2) || (currPulse == 0 || currPulse == 2) || (!currspo2))
  {
    return 0;
  }
  return 1;
}
