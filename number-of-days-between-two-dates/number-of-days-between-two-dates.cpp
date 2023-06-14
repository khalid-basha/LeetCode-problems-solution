class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
        return abs(to_days(date2) - to_days(date1));
    }
    int  months_days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int to_days(string date){
        // 2004-04-15
        int year = stoi(date.substr(0,4));// year = str[0...3] ... 4 is the length of the sub string
        int month = stoi(date.substr(5,2)); // month = str[5..6]
        int day = stoi(date.substr(8,2)); // month = str[8..9]

        int daysCount = 0;
        for(int i=1971; i<year;i++){
            daysCount += leap_year(i)?366:365;
        }

        for(int i=1;i<month;i++){
            daysCount +=months_days[i];
            if(i==2 && leap_year(year)) daysCount++;
        }
        daysCount +=day;
        return daysCount;
    }
    
    bool leap_year(int year)
    {
            return (year %4  == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};