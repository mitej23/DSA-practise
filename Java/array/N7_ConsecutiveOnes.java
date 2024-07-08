package Java.array;

public class N7_ConsecutiveOnes {
  public static void main(String[] args) {
    int[] nums = { 1, 1, 0, 1, 1, 1 };

    int maxCount = 0;
    int count = 0;

    for (int i = 0; i < nums.length; i++) {
      if (nums[i] == 1) {
        count++;
        if (count > maxCount) {
          maxCount = count;
        }
      } else {
        count = 0;
      }
    }

    System.out.println(maxCount);

  }
}