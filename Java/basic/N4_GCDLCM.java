package Java.basic;

import java.util.Scanner;

public class N4_GCDLCM {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

    int n1 = scn.nextInt();
    int n2 = scn.nextInt();

    int ognum1 = n1;
    int ognum2 = n2;

    while (n1 % n2 != 0) {
      int rem = n1 % n2;
      n1 = n2;
      n2 = rem;
    }

    int gcd = n2;

    System.out.println("GCD: " + gcd);
    System.out.println("LCM: " + ((ognum1 * ognum2) / gcd));

    scn.close();

  }
}
