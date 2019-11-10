#ifndef TEMPTRENDER_H
#define TEMPTRENDER_H

#include <string>
#include <vector>
//This is the file that will contain the list of data and function members
class tempTrender {
	//Path to File
	std::string FilePath;
	std::string FileName;
	
	public:
	tempTrender(std::string filePath); //Construct using the specified file
	~tempTrender() {} //Destructor
	
	//Main Functions
	void tempOnDay(int monthToCalculate, int dayToCalculate); //Make a histogram of the temperature on this day
	void Seasons(double Hour); //Make Graph of Temperature on a given hour every day.
	void tempPerDay(double Year, double Hour);
	
	//void tempOnDay(int dateToCalculate); //Make a histogram of the temperature on this date
	//void tempPerDay(); //Make a histogram of the average temperature of each day of the year
	void hotCold(double Hour); //Make a histogram of the hottest and coldest day of the year
	//void tempPerYear(int yearToExtrapolate); //Make a histogram of average temperature per year, then fit and extrapolate to the given year
	
	
	//Auxiliary Functions
	void Reader(ifstream &file, std::vector<double> &v1, std::vector<double> &v2, std::vector<double> &v3, std::vector<double> &v4, std::vector<double> &v5);
	void split(std::vector<double> &vect, std::string &s, std::string &delimiter);
	
	private:
	//Private Variables
	int monthToCalculate;
	int dayToCalculate;
	double Hour;
	double Year;
	double OverWriteDouble;
	
	std::vector<double> vect;
	
	std::string s;
	std::string delimiter;

};

#endif
