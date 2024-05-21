#include<bits/stdc++.h>
using namespace std;
bool isUniqueDigits(int num) {
    vector<bool> seen(10);
    while (num > 0) {
      const int digit = num % 10;
      if (seen[digit])
        return false;
      seen[digit] = true;
      num /= 10;
    }
    return true;
  }
 int numberCount(int a, int b) {
    int ans = 0;
    for (int num = a; num <= b; ++num)
      if (isUniqueDigits(num))
        ++ans;
    return ans;
  }


  

   void countNumbers(vector<vector<int>>arr){

       for(int i=0;i<arr.size();i++){
         int low=arr[i][0];
         int high=arr[i][1];
           int val=numberCount(low,high);
           cout<<val<<endl;
       }
   }