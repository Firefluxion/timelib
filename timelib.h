/**
  * @author Robin Gerwe & Markus Möhlenkamp
  * @date 2020-03-10
  * This program is to compute the amount of days in the year for a give date.
  * It factors in leap years in the Gregorian calendar. See: https://en.wikipedia.org/wiki/Gregorian_calendar
  * Limits the highest year to 2400.
**/

#ifndef TIMELIB_H_INCLUDED
#define TIMELIB_H_INCLUDED

/** @struct date
 *  @brief This structure represents a date.
 *  @var date::year
 *  Member 'year' contains the year of a date.
 *  @var date::month
 *  Member 'month' contains the month of a date.
 *  @var date::day
 *  Member 'day' contains the day of a date.
 */
struct date
{
    int year;
    int month;
    int day;
};

/**
  * Calculates the day of the year by given date.
  * @param inputDate
  * @return amountOfDays
**/
int day_of_the_year(struct date inputDate);

/**
 * Checks whether a given year is a leap year.
 * @param year
 * @return -1 if the given year is not valid.
 * @return 0 if the given year is not a leap year.
 * @return 1 if the given year is a leap year.
 **/
int is_leapyear(int year);

/**
  * Gets the days of the given month.
  * @param inputDate
  * @return Days of the given month.
**/
int get_days_for_month(struct date inputDate);

/**
  * Checking, if the input date is valid. Checks if Year, Month and Day are in their boundaries.
  * Calls is_year_valid.
  * Checks if the given month id between 1 and 12.
  * Checks if the given day is between 1 and get_days_for_month for the given month.
  * @param inputDate
  * @return 1 if the date is valid.
  * @return 0 if the date is not valid.
**/
int exists_date(struct date inputDate);

/**
  * Request date till the date is valid.
  * @return inputDate : returns the given date.
**/
struct date input_date();

/**
  * Checking, if the year is between 1582 and 2401.
  * @param year
  * @return 1 if the year is valid.
  * @return 0 if the year is not valid.
**/
int is_year_valid(int year);

#endif // TIMELIB_H_INCLUDED
