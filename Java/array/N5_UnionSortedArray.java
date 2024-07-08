package Java.array;

public class N5_UnionSortedArray {
	public static void main(String args[]) {
		int[] arr1 = { -7, 8 };
		int[] arr2 = { -8, -3, 8 };

		int[] ansArr = new int[arr1.length + arr2.length];

		int i = 0;
		int j = 0;
		int ans = 0;

		while (i < arr1.length && j < arr2.length) {
			if (arr1[i] < arr2[j]) {
				ansArr[ans] = arr1[i];
				i++;
			} else if (arr1[i] > arr2[j]) {
				ansArr[ans] = arr2[j];
				j++;
			} else {
				ansArr[ans] = arr1[i];
				i++;
				j++;
			}
			ans++;
		}

		while (i < arr1.length) {
			ansArr[ans] = arr1[i];
			i++;
			ans++;
		}

		while (j < arr2.length) {
			ansArr[ans] = arr2[j];
			j++;
			ans++;
		}

		int[] finalArr = new int[ans];
		for (int k = 0; k < finalArr.length; k++) {
			finalArr[k] = ansArr[k];
			System.out.print(finalArr[k]);
		}

	}
}
