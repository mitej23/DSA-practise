package Java.array;

public class N2_RemoveDuplicates {
  public static void main(String[] args) {
    int[] nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };

    int cur = nums[0];
    int totUnique = 1;

    for (int i = 1; i < nums.length; i++) {
      if (cur != nums[i]) {
        cur = nums[i];
        totUnique += 1;
      }
    }

    System.out.println("Total Unique Nos: " + totUnique);

  }
}
