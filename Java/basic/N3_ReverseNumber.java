package Java.basic;

import java.util.Scanner;

public class N3_ReverseNumber {
  public static void main(String[] args){
    Scanner scn = new Scanner(System.in);
    int num = scn.nextInt();
  
    System.out.println("Rev of " + num + " is");

    int ans = 0;
  
    while(num > 0){
      int rem = num % 10;
      ans = (ans * 10) + rem;
      num /= 10;
    }

    System.out.println(ans);
    scn.close();

  }


}
