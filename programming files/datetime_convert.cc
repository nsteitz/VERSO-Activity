#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

int main()
{
    //this sets the time of date string 
    std::string date_str = "2022-03-17 10:45:30";
    //creates a date_obj struct 
    std::tm date_obj = {};
    //read the string like a file stream 
    std::istringstream ss(date_str);
    //reads the date time into ss 
    ss >> std::get_time(&date_obj, "%Y-%m-%d %H:%M:%S");
    //creates a string stream to format the date 
    std::stringstream formatted_date_ss;
    //format the date
    formatted_date_ss << std::put_time(&date_obj, "%m/%d/%Y %H:%M:%S");
    //create a formatted date string 
    std::string formatted_date = formatted_date_ss.str();
    //print out the formatted date
    std::cout << formatted_date << std::endl;

    return 0;
}
