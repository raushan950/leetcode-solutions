class Solution {
    public int[] frequencySort(int[] nums) {

        HashMap<Integer,Integer>freq=new HashMap<>();
        for(int x:nums){
            freq.put(x,freq.getOrDefault(x,0)+1);
        }
        Integer[]nums2=new Integer[nums.length];
        for(int i=0;i<nums.length;i++){
            nums2[i]=nums[i];
        }
        Arrays.sort(nums2,( a,b)->{
            if(freq.get(a)!=freq.get(b)){
                return Integer.compare(freq.get(a),freq.get(b));
            }else{
                return Integer.compare(b,a);
            }
        });
        for(int i=0;i<nums.length;i++){
            nums[i]=nums2[i];
        }
        return nums;
        
    }
}