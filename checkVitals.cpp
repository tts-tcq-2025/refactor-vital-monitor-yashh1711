

int checkTemperature(float temperature)
{
    if (temperature < 95)
    {
        return 0;
    }
    else if (temperature >= 95 && temperature <= 102)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int checkPulse(float pulseRate)
{
    if (pulseRate < 60)
    {
        return 0;
    }
    else if (pulseRate >= 60 && pulseRate <= 100)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int checkspo2(float spo2)
{
    if (spo2 < 90)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}