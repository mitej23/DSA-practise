package Java.array;

public class N8_LongestSubarryWithKSum {
  public static void main(String[] args) {

    // Not the most optimum needs advanced technique.

    int[] arr = { 10, 5, 2, 7, 1, 9 };
    int k = 15;

    int longest = 0;

    for (int i = 0; i < arr.length; i++) {
      int sum = 0;
      int count = 0;
      for (int j = i; j < arr.length; j++) {
        sum += arr[j];
        count++;

        if (sum == k && count > longest) {
          longest = count;
        }

      }
    }

    System.out.println(longest);

  }
}
