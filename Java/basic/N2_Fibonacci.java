package Java.basic;

import java.util.Scanner;

public class N2_Fibonacci {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

    int nums = scn.nextInt();

    int i = 0; // total numbers

    int a = 0;
    int b = 1;
    int c;
    while (i < nums) {
      System.out.println(a);
      c = a + b;
      a = b;
      b = c;

      i++;
    }

    scn.close();

  }
}
