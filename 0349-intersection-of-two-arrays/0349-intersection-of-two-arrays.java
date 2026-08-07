class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer>set=new HashSet<>();
        ArrayList<Integer>list=new ArrayList<>();
        for(int i=0;i<nums1.length;i++){
            set.add(nums1[i]);
        }
        for(int x:nums2){
            if(set.contains(x))
            list.add(x);
            set.remove(x);
        }
       int n=list.size();
        int[] ans=new int[n];
        for(int i=0;i<n;i++){
            ans[i]=list.get(i);
        }
        return ans;

        

        
    }
}