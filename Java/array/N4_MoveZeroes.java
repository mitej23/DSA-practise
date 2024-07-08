package Java.array;

public class N4_MoveZeroes {
  public static void main(String[] args) {
    int[] nums = { 0, 1, 0, 3, 12 };

    for (int i = 0; i < nums.length; i++) {
      if (nums[i] == 0) {
        int idx = i;

        while (idx < nums.length) {
          if (nums[idx] != 0) {
            int temp = nums[i];
            nums[i] = nums[idx];
            nums[idx] = temp;
            break;
          }
          idx++;
        }
      }
    }

    for (int i = 0; i < nums.length; i++) {
      System.out.print(nums[i]);
    }

  }
}