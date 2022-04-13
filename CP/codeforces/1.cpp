// C++ program to find out execution time of
// of functions
#include <algorithm>
#include <chrono>
#include <iostream>
#include<vector>
using namespace std;
using namespace std::chrono;

// For demonstration purpose, we will fill up
// a vector with random integers and then sort
// them using sort function. We fill record
// and print the time required by sort function
int main()
{



	// Get starting timepoint
	auto start = high_resolution_clock::now();

	// Call the function, here sort()
	
    int cnt=0;
    for(int i=0;i<1660964;i++) cnt++;

	// Get ending timepoint
	auto stop = high_resolution_clock::now();

	// Get duration. Substart timepoints to
	// get duration. To cast it to proper unit
	// use duration cast method
	auto duration = duration_cast<microseconds>(stop - start);

	cout << "Time taken by function: "
		<< duration.count() << " microseconds" << endl;

	return 0;
}
