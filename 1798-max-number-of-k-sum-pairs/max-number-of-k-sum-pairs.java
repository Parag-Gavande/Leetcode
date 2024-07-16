class Solution {
    public int maxOperations(int[] nums, int k) {

        // Using HashMap
        int cnt = 0;
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int num : nums) {
            int c = k - num;
            if (map.containsKey(c)) {
                cnt++;
                if(map.get(c)==1){
                    map.remove(c);
                }
                else{
                map.put(c, map.get(c) - 1);
                }
            } else {
                map.put(num, map.getOrDefault(num, 0) + 1);
            }
        }
        return cnt;

        // Two Pointer approach 

        // Arrays.sort(nums);
        // int s=0;
        // int e=nums.length-1;
        // int count=0;

        // while(s<e){
        //     if(nums[s]+nums[e]>k){
        //         e--;
        //     }else if(nums[s]+nums[e]<k){
        //         s++;
        //     }else{
        //         count++;
        //         s++;
        //         e--;
        //     }
        // }
        // return count;
    }
}