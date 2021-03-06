#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <ctime>

using namespace std; // yeah i know i shouldn't use this

float estimate_pi(int n) {
	float inner_points = 0;
	float points_total = 0;
	srand(time(NULL));

	for (int i = 0; i < n; i++) {
		
		float x = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		float y = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		//gets 2 random floats from 0 to 1
		float distance = pow(x, 2) + pow(y, 2);
		//calculates the total distance to the origin of the grid
		if (distance < 1) {
			inner_points = inner_points + 1;
		}
		points_total = points_total + 1;
		//checks if the coordinate is still in the radius or not
	}
	float pi = 4*(inner_points / points_total);
	return pi;
}

int main() {
	time_t start = time(0);
	cout << estimate_pi(1000000) << endl;
	time_t end = time(0);
	cout << end - start << endl;
}
