/*binarysearch.cpp
Description
R. Nayak (Ritika)

This week's topic is recursion. Your solution must be recursive, otherwise we cannot accept it.

In the template file, you find a function with the following signature:

bool binarySearch(const std::vector<int>& v, int minIndex, int maxIndex, int searchValue)

This function gets a sorted vector v (smallest value at the lowest index). It returns a boolean value, expressing whether the searchValue is present inside the vector, in the index range from minIndex to maxIndex (both inclusive). It works according to the following pseudocode:

If the vector range is empty (maxIndex < minIndex) return false.
midIndex is the "middle value" in between minIndex and maxIndex
if searchValue is present at midIndex, return true
if searchValue is smaller than the value at midIndex, return binarySearch() for the index range "left of" midIndex
otherwise return binarySearch() for the index range "right of" midIndex
?*/

