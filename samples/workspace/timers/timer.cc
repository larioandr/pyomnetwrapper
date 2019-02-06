#include "timer.h"

Define_Module(Timer);

Timer::~Timer()
{
    cancelAndDelete(timeout);
}

void Timer::initialize()
{
    timeout = new cMessage("timeout");
    scheduleAt(simTime() + par("interval").doubleValue(), timeout);

    intervalSignal = registerSignal("interval");
    boolValueSignal = registerSignal("boolValue");
    intValueSignal = registerSignal("intValue");
    doubleValueSignal = registerSignal("doubleValue");
}

void Timer::handleMessage(cMessage *msg)
{
    emit(intervalSignal, interval);
    emit(boolValueSignal, par("boolValue").boolValue());
    emit(intValueSignal, static_cast<long>(par("intValue").intValue()));
    emit(doubleValueSignal, par("doubleValue").doubleValue());

    interval = par("interval").doubleValue();
    scheduleAt(simTime() + interval, timeout);
}
