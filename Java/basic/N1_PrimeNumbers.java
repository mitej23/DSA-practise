package Java.basic;

import java.util.Scanner;

public class N1_PrimeNumbers {
	public static void main(String args[]) {

		Scanner scn = new Scanner(System.in);

		int number = scn.nextInt();

		for (int n = 2; n < number; n++) {
			boolean isPrime = true;
			for (int i = 2; i * i <= n; i++) {
				if (n % i == 0) {
					isPrime = false;
					break;
				}
			}

			if (isPrime) {
				System.out.println(n);
			}
		}

		scn.close();
	}

}