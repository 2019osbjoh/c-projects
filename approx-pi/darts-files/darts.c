#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct position{
	double x;
	double y;
};

struct rectangle{
	double length;
	double width;	
};

struct circle{
	double radius;
	double diameter;
};


int genSeed(weighting) {	
	time_t timeSeed = time(NULL);
	int randomSeed;
	srand(timeSeed);
	
	for (int i = 0; i < 120; i++) { 
		randomSeed = rand();
		randomSeed = randomSeed + timeSeed / weighting;
		srand(randomSeed);
		randomSeed = rand() * weighting;
		randomSeed = randomSeed + timeSeed * time(NULL) * weighting;
	}
	return randomSeed;
}

// Returns a random double between -1 and 1
double randNum(weight) {	
	double num;
	srand(genSeed(weight));
	num = (double) rand() / RAND_MAX * 2.0 - 1.0;
	
	return num;
}


int main() {
	int hits;
	int total;
	
	struct position dartPos = {0.0, 0.0};
	//struct rectangle rect = {1.0, 1.0};
	//struct circle board = {0.5, 1.0};	
	
	/*
	for (int j = 0; j < 1000; j++) {
		dartPos = {randNum(j / j), randNum(j * j)}
		
		if (dartPos.x <= 1 || dartPos.x >= -1) {
			hits++;
			total++;
		}
	}
	*/
	return 0;
}







