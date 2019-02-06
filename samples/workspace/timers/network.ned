module Box {
    submodules:
        timer: Timer;
}

network Network {
    parameters:
        int numTimers;
        int numBoxes;
    submodules:
        lonelyTimer: Timer;
        timers[numTimers]: Timer;
        boxes[numBoxes]: Box;
}