package Java.array.pepcoding;

public class N1_BarChart {
  public static void main(String[] args) {
    int[] arr = { 4, 2, 3, 7, 5 };

    int i = 1;
    int max = arr[0];
    while (i < arr.length) {
      if (arr[i] > max) {
        max = arr[i];
      }
      i++;
    }

    for (i = max; i > 0; i--) {
      for (int j = 0; j < arr.length; j++) {
        if (arr[j] >= i) {
          System.out.print("*");
        } else {
          System.out.print(" ");
        }
      }
      System.out.println("");
    }

  }
}
