package Java.stack;

import java.util.Stack;

public class N6_SlidingWindowMax {
    public static void main(String[] args) {
        int k = 3;
        int[] nums = { 1, 3, -1, -3, 5, 3, 6, 7 };

        Stack<Integer> st = new Stack<Integer>();

        int[] ans = new int[nums.length];

        for (int i = 0; i < nums.length; i++) {
            while (!st.empty() && nums[i] > nums[st.peek()]) {
                int topIdx = st.pop();
                ans[topIdx] = i;
            }
            st.push(i);
        }

        while (!st.empty()) {
            int topIdx = st.pop();
            ans[topIdx] = nums.length;
        }

        int[] finalAns = new int[ans.length - k + 1];
        int j = 0;
        for (int i = 0; i < ans.length - k + 1; i++) {
            if (j < i) {
                j = i;
            }
            while (ans[j] < i + k) {
                j = ans[j];
            }

            finalAns[i] = nums[j];
        }

        // printing ans
        for (int i = 0; i < ans.length - k + 1; i++) {
            System.out.print(finalAns[i]);
        }
    }
}
