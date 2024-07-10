package Java.stack;

import java.util.Stack;

public class N4_RisingTemperature_StockSpan {
	public static void main(String[] args) {
		int[] temperatures = { 73, 74, 75, 71, 69, 72, 76, 73 };

		Stack<Integer> st = new Stack<Integer>();

		int[] span = new int[temperatures.length];

		for (int i = 0; i < temperatures.length; i++) {

			while (!st.empty() && temperatures[i] > temperatures[st.peek()]) {
				int idx = st.pop();
				span[idx] = i;
			}
			st.push(i);
		}

		while (!st.empty()) {
			int idx = st.pop();
			span[idx] = 0;
		}

		for (int i = 0; i < span.length; i++) {
			if (span[i] != 0) {
				span[i] -= i;
			}
			System.out.print(span[i]);
		}

	}
}
