package Java.array;

public class N1_ArraySortedAfterRotation {
  public static void main(String[] args) {

    // =============== O(n^2)
    int[] nums = { 3, 4, 5, 1, 2 };

    // boolean sorted = true;
    // for (int i = 0; i < nums.length; i++) {
    // sorted = true;
    // for (int j = i; j < i + nums.length - 1; j++) { // if n = 5 then loop 4 times
    // if (nums[j % nums.length] <= nums[(j + 1) % nums.length]) {
    // } else {
    // sorted = false;
    // break;
    // }
    // }
    // if (sorted) {
    // System.out.println("Sorted after rotation");
    // break;
    // }
    // }
    // if (!sorted) {
    // System.out.println("Not sorted");
    // }

    // O(n)
    int count = 0;
    for (int i = 0; i < nums.length - 1; i++) {
      if (nums[i] > nums[i + 1]) {
        count++;
      }
    }

    if (nums[0] < nums[nums.length - 1]) {
      count++;
    }

    if (count <= 1) {
      // sorted
    } else {
      // not sorted
    }

  }
}
