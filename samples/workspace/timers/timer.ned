simple Timer
{
    parameters:
        @statistic[interval](record=last,count,min,max,mean,vector?histogram?stats?;title="interval between fireing";unit=s);
        @statistic[boolValue](record=last,count,min,max,mean,vector?histogram?stats?);
        @statistic[intValue](record=last,count,min,max,mean,vector?histogram?stats?);
        @statistic[doubleValue](record=last,count,min,max,mean,vector?histogram?stats?);
        
        @signal[interval](type=simtime_t);
        @signal[boolValue](type=bool);
        @signal[intValue](type=long);
        @signal[doubleValue](type=double);
        
        volatile double interval @unit(s);
        volatile bool boolValue;
        volatile int intValue;
        volatile double doubleValue;
}
