class Solution {
  public:
   void binSort(vector<int>& arr) {
        int left = 0, right = arr.size() - 1;
        
        while (left < right) {
            while (left < right && arr[left] == 0) left++;  
            while (left < right && arr[right] == 1) right--; 
            
            if (left < right) {
                swap(arr[left], arr[right]); 
                left++;
                right--;
            }
        }
    }
};
