#pragma once

#include <string>

class LogicManager {
protected:
    int timeRate, plantScore, weatherVal, timeDay, timeYear, temperatureVal;

public:
    LogicManager();
    LogicManager(int timeRateIn, int timeYearIn);

    void EnactTime();
    void CalcTemperature();
    void CalcWeather();

    //These will be implemented once the Environment and plant class have been properly implemented.
    //void ActOnEnvironments();
    //void TakeInput()
};