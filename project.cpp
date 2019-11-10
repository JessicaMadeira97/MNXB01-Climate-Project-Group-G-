#include "tempTrender.h"
#include <string>

//This is the main file
void project() {
	string pathToFile = "datasets/smhi-openda_Karlstad.csv"; //Put the path to your data file here
	tempTrender t(pathToFile); //Instantiate your analysis object
	
	t.tempOnDay(8, 23); //Call some functions that you've implemented
	t.Seasons(12.);
	t.tempPerDay(2004., 12.);
	t.hotCold(12.);
	//t.tempOnDay(235);
	//t.tempPerDay();

	//t.tempPerYear(2050);
}
