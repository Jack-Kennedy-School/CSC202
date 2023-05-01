void increment(Time& time, double secs)
{
    double total_secs = time.second + secs;
    int extra_mins = static_cast<int>(total_secs / 60.0);
    int extra_hours = extra_mins / 60;

    time.second = total_secs - extra_mins * 60.0;
    time.minute += extra_mins - extra_hours * 60;
    time.hour += extra_hours;
}
