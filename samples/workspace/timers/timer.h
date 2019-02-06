#ifndef __TIMERS_TIMER_H_
#define __TIMERS_TIMER_H_

#include <omnetpp.h>

using namespace omnetpp;

/**
 * Timer emits a bunch of signals within time intervals specified in
 * `interval` NED volatile parameter:
 *
 * - "interval": an interval passed from the previous emit time (double)
 * - "boolValue": a random boolean value
 * - "intValue": a random integer value
 * - "doubleValue": a random double value
 *
 * All values are given as volatile NED parameters.
 */
class Timer : public cSimpleModule
{
  public:
    virtual ~Timer();
  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
  private:
    simtime_t interval;
    cMessage *timeout = nullptr;

    simsignal_t intervalSignal;
    simsignal_t boolValueSignal;
    simsignal_t intValueSignal;
    simsignal_t doubleValueSignal;
};

#endif
