package com.company;

public class findTheDuplicate {
    public static int findDuplicate(int[] nums){
        boolean visited[] = new boolean[nums.length + 1];

        for (int value:nums) {
            System.out.println(visited[value]);
            if (visited[value]){
                return value;
            }
            visited[value] = true;
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] nums = {1,2,3,4,4};

        System.out.println("The duplicate element is : " + findDuplicate(nums));
    }
}
