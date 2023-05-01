class Time {
public:
    Time(int h, int m, double s);
    Time(int h, int m, int s);

    // rest of the class definition
};

Time::Time(int h, int m, int s)
{
    std::cout << "Creating Time object using int constructor\n";
    hour = h;
    minute = m;
    second = s;
}

Time::Time(int h, int m, double s)
{
    std::cout << "Creating Time object using double constructor\n";
    hour = h;
    minute = m;
    second = s;
}
