#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target);

int main()
{
    vector<int> number = {2,7,11,15}; // target 9 -> 0 1
    int target = 9;

   for (int i : twoSum(number, target))
   {
       cout << i << " ";
   }

    return 0;
};


vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
          if (nums[i] + nums[j] == target) {
            return {i, j};
          }
        }
      }
    return { };
}
