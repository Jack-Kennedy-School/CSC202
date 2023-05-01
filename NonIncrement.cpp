void increment(Time& time, double secs)
{
    time.second += secs;

    if (time.second >= 60.0) {
        double extra_secs = std::floor(time.second / 60.0);
        time.second -= extra_secs * 60.0;
        time.minute += static_cast<int>(extra_secs);
    }
    if (time.minute >= 60) {
        int extra_mins = time.minute / 60;
        time.minute -= extra_mins * 60;
        time.hour += extra_mins;
    }
}
