package Java.stack;

import java.util.Stack;

public class N2_NextGreaterElement1 {
	public static void main(String[] args) {
		int[] nums1 = { 4, 1, 2 };
		int[] nums2 = { 1, 3, 4, 2 };

		int[] nextGreaterEl = new int[nums2.length];
		Stack<Integer> st = new Stack<Integer>();

		for (int i = 0; i < nums2.length; i++) {
			if (st.empty()) {
				st.push(i);
			} else {
				while (!st.empty() && nums2[st.peek()] < nums2[i]) {
					int topIdx = st.pop();
					nextGreaterEl[topIdx] = nums2[i];
				}
				st.push(i);
			}

		}

		while (!st.empty()) {
			int idx = st.pop();
			nextGreaterEl[idx] = -1;
		}

		// for leetcode solution
		int[] ansArr = new int[nums1.length];
		for (int i = 0; i < nums1.length; i++) {
			int n1 = nums1[i];
			for (int j = 0; j < nums2.length; j++) {
				if (n1 == nums2[j]) {
					ansArr[i] = nextGreaterEl[j];
					break;
				}
			}
		}

		// for (int i = 0; i < ansArr.length; i++) {
		// 	System.out.println(ansArr[i]);
		// }

	}
}
