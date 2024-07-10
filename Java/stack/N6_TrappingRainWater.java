package Java.stack;

import java.util.Stack;

public class N6_TrappingRainWater {

	static int min(int i, int j) {
		if (i < j) {
			return i;
		} else {
			return j;
		}
	}

	// =====================  No need to solve using stack just use array traversal =================

	public static void main(String[] args) {

		int[] height = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
		// 0 6 5 4 3 2 1 0 0 1 0 0

		Stack<Integer> st = new Stack<Integer>();

		int[] rge = new int[height.length];
		int[] lge = new int[height.length];

		// find right greatest for each

		for (int i = height.length - 1; i >= 0; i--) {
			if (st.empty()) {
				rge[i] = 0;
				st.push(i);
			} else {
				if (height[i] >= height[st.peek()]) {
					rge[i] = 0;
					st.pop();
					st.push(i);
				} else {
					rge[i] = height[st.peek()];
				}
			}
		}

		st.clear();

		// find left greatest for each

		for (int i = 0; i < height.length; i++) {
			if (st.empty()) {
				lge[i] = 0;
				st.push(i);
			} else {
				if (height[i] >= height[st.peek()]) {
					lge[i] = 0;
					st.pop();
					st.push(i);
				} else {
					lge[i] = height[st.peek()];
				}
			}
		}

		int total = 0;
		for (int i = 0; i < height.length; i++) {
			int min = min(lge[i], rge[i]);
			if (min != 0) {
				total += min - height[i];
			} 
		}

		System.out.println(total);

	}
}
