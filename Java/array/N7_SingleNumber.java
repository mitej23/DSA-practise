package Java.array;

public class N7_SingleNumber {
  public static void main(String[] args) {
    int[] nums = { 1, 1, 2, 2, 3 };

    int xor = 0;
    for (int i = 0; i < nums.length; i++) {
      xor = xor ^ nums[i];
    }

    System.out.println(xor);

  }
}