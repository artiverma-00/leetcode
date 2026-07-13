class Solution {
public:
   vector<int> sequentialDigits(int low, int high) {
   //result vector
   vector<int>result;

   //for loop for traverse 1 to 9
   for(int start=1; start<=9; start++){
    int num= start;
    int next_digit=start+1;
   

   //while loop for store the num
while(next_digit<=9){
    num = num * 10 + next_digit;
    if(num>=low && num<=high){
     result.push_back(num);
    
    }
     next_digit++;
}
   }
   //sort
   sort(result.begin(), result.end());

   //return result
return result;

}

};