package Java.array;

public class N6_MissingNunber {
  public static int main() {

    int[] nums = { 3, 0, 1 };

    int n = nums.length;
    int reqTotal = (n * (n + 1)) / 2;
    boolean isZeroPresent = false;

    int arrTotal = 0;
    for (int i = 0; i < n; i++) {
      if (nums[i] == 0) {
        isZeroPresent = true;
      }

      arrTotal += nums[i];
    }

    if (!isZeroPresent) {
      return 0;
    } else {
      return reqTotal - arrTotal;
    }

  }
}
