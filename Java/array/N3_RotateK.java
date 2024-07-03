package Java.array;

public class N3_RotateK {
  public static void main(String[] args) {

    int[] nums = { 0, 1, 2, 3, 4, 5, 6, 7 };
    int k = 3;

    // Very Bad Approach == o(rotation*n)

    // // for(int rot = 1;rot <= k;rot++){
    // int temp = nums[nums.length - 1];
    // for (int i = nums.length - 2; i >= 0; i--) {
    // nums[i + 1] = nums[i];
    // }
    // nums[0] = temp;
    // // }
    // for (int i = 0; i < nums.length; i++) {
    // System.out.print(nums[i]);
    // }

    // Second Approach By Striver

    int[] temp = new int[k];
    // Setting temp array
    for (int i = nums.length - k; i < nums.length; i++) {
      temp[(i + k) % nums.length] = nums[i];
    }


    // Rotating the remaining array
    for (int i = nums.length - k - 1; i >= 0; i--) {
      nums[i + k] = nums[i];
    }
    // Placing temp to their rotated place
    for (int i = 0; i < k; i++) {
      nums[i] = temp[i];
    }

    // Checking final Ans
    for (int i = 0; i < nums.length; i++) {
      System.out.print(nums[i]);
    }

  }
}
