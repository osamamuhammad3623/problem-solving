/*
https://leetcode.com/problems/container-with-most-water/
*/
#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
  int leftIndex = 0;
	int rightIndex = height.size() - 1;

	int currHeight = min(height[leftIndex], height[rightIndex]);
	unsigned int currWater = currHeight * (rightIndex - leftIndex);
	unsigned int mostWater = currWater;

	while(leftIndex != rightIndex) {
		(height[leftIndex] < height[rightIndex]) ? leftIndex++ : rightIndex--;

		currHeight = min(height[leftIndex], height[rightIndex]);
		currWater = currHeight * (rightIndex - leftIndex);
		mostWater = max(mostWater, currWater);
	}

	return mostWater;
}
