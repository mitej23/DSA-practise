package Java.stack;

import java.util.Stack;

public class N3_NextGreaterElement {
	public static void main(String[] args) {

		// Contains Circular Array

		int[] nums = { 1, 2, 1 };

		int[] nextGreaterEl = new int[nums.length];
		Stack<Integer> st = new Stack<Integer>();

		for (int i = 0; i < 2 * nums.length; i++) {
			int index = i % nums.length;
			while (!st.empty() && nums[st.peek()] < nums[index]) {
				nextGreaterEl[st.pop()] = nums[index];
			}
			if (i < nums.length) {
				st.push(index);
			}
		}

		while (!st.empty()) {
			int idx = st.pop();
			nextGreaterEl[idx] = -1;
		}

		for (int i = 0; i < nums.length; i++) {
			System.out.print(nextGreaterEl[i]);
		}

	}
}
