#include <iostream>

using namespace std;


class Date
{
    private:
        unsigned int day;
        unsigned int month;
        unsigned int year;

    public:
        Date(unsigned int day, unsigned int month, unsigned int year)
        {
            this->day = day;
            this->month = month;
            this->year = year;
        }

        unsigned int getDay() { return this->day; }
        unsigned int getMonth() { return this->month; }
        unsigned int getYear() { return this->year; }

        // is this->component larger than the d.component
        bool isDayLarger(Date &d) { return this->day > d.day; }
        bool isMonthLarger(Date &d) { return this->month > d.month; }
        bool isYearLarger(Date &d) { return this->year > d.year; }

        unsigned int dayDiff(Date &d) { return this->day - d.day; }
        unsigned int monthDiff(Date &d) { return this->month - d.month; }
        unsigned int yearDiff(Date &d) { return this->year - d.year; }

        bool isLargerDate(Date &d)
        {
            if (this->year != d.year)
                return this->isYearLarger(d);
            else if (this->month != d.month)
                return this->isMonthLarger(d);
            else
                return this->isDayLarger(d);
        }

        void print()
        {
            cout << this->day << " " << this->month << " " << this->year << endl;
        }
};

int main()
{
    int day, month, year;
    int fine = 0;

    cin >> day >> month >> year;
    Date returnDate(day, month, year);

    cin >> day >> month >> year;
    Date dueDate(day, month, year);

    if (returnDate.isLargerDate(dueDate)) {
        int daysDelayed, monthsDelayed;
        daysDelayed = monthsDelayed = 0;

        if (returnDate.isYearLarger(dueDate))
            fine = 10000;
        else if (returnDate.isMonthLarger(dueDate))
            fine = 500 * returnDate.monthDiff(dueDate);
        else if (returnDate.isDayLarger(dueDate))
            fine = 15 * returnDate.dayDiff(dueDate);
    }

    cout << fine << endl;

    return 0;
}
