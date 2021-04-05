#include <iostream>
#include <string>

class Date {

    public:
        Date( int dateMonth, int dateDay, int dateYear) : month{dateMonth}{
            if (dateMonth>=1 && dateMonth<=12){
                month = dateMonth;
            }
            else{
                month = 1;
            }
            day = dateDay;
            year = dateYear;

        }

    void setMonth(int dateMonth){
        if (dateMonth>=1 && dateMonth<=12){
            month = dateMonth;
        }
        else{
            month = 1;
        }
    }

    void setDay(int dateDay){
        day = dateDay;
    }

    void setYear(int dateYear){
        year = dateYear;
    }

        
    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }

    void displayDate() {
        std::cout<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<std::endl;
    }

    private:
        int month;
        int day;
        int year;

};
