package leetcode.contests.contest395;
import java.util.Arrays;

public class B {
    public int minimumAddedInteger(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        System.out.println(Arrays.toString(nums1));
        System.out.println(Arrays.toString(nums2));
        int n = nums1.length;
        int n_2 = n - 2;
        int min_dis = Integer.MAX_VALUE;
        for(int i = 0;i <=n - n_2;i++){
            int d = nums2[0] - nums1[i];
            System.out.println(d);
            int count = 1,add_num1 = 0;
            for(int j = 1;j<n_2 && j + i + add_num1<n;j++){
                System.out.println(nums2[j]-nums1[j+i + add_num1]);
                if(nums2[j]-nums1[j+i + add_num1]==d){
                    count++;
                }
                else {
                    while(j + i + add_num1<n){
                        if (nums2[j]-nums1[j+i + add_num1]!=d)add_num1++;
                        else break;
                    }
                    if(j + i + add_num1>=n)break;
                    if(nums2[j]-nums1[j+i+add_num1]==d){
                        count++;
                    }
                }
            }
            if(count >= n_2)min_dis = Math.min(min_dis, d);
        }
        return min_dis;
    }

    public static void main(String[] args) {
        int[] num1 = {4,6,3,1,4,2,10,9,5};
        int[] num2 = {5,10,3,2,6,1,9};
        B b = new B();
        b.minimumAddedInteger(num1, num2);
    }
}
