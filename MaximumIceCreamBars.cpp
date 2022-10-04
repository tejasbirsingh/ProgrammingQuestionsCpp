/*
    LeetCode Problem Link - https://leetcode.com/contest/weekly-contest-237/problems/maximum-ice-cream-bars/
    1833. Maximum Ice Cream Bars

    Problem description -
        It is a sweltering summer day, and a boy wants to buy some ice cream bars.

        At the store, there are n ice cream bars. You are given an array costs of length n, where costs[i] is the price of the ith ice cream bar in coins. The boy initially has coins coins to spend, and he wants to buy as many ice cream bars as possible. 

        Return the maximum number of ice cream bars the boy can buy with coins coins.

        Note: The boy can buy the ice cream bars in any order.

    Solution - 
     - This problen can be solved using greedy approach
     - We can simply sort the array and then traverse over it
     - At every index we will check if costs[i] is less than coins then increment the counter
     - And subtract costs[i] from coins
     - Time complexity - O(nLogN) - as we are sorting the array
     - Space complexity - O(1) - constant as we are not using any new data structure.
*/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        sort(costs.begin(),costs.end());
        int count=0;

        for(int i=0;i<costs.size();i++){
            if(costs[i]>coins) {
                break;
            } else{
                count++;
                // subtract the costs[i] from coins as we have bought 1 ice cream
                coins-=costs[i];
            }
        }
        return count;
    }
};