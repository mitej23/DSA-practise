package Java.stack;

import java.util.Stack;

public class N5_LargestRectArea {
    public static void main(String[] args) {

        int[] heights = { 2, 1, 2 };
        Stack<Integer> st = new Stack<Integer>();

        int[] rightSmallest = new int[heights.length];
        int[] leftSmallest = new int[heights.length];
        int max = 0;

        // right smallest

        for (int i = 0; i < heights.length; i++) {
            while (!st.empty() && (heights[i] < heights[st.peek()])) {
                int idxTop = st.pop();
                rightSmallest[idxTop] = (i - idxTop) * heights[idxTop];
            }
            st.push(i);
        }

        while (!st.empty()) {
            int idxTop = st.pop();
            rightSmallest[idxTop] = (heights.length - idxTop) * heights[idxTop];
        }

        // left smallest

        for (int i = heights.length - 1; i >= 0; i--) {
            if (st.empty()) {
                st.push(i);
            } else {
                while (!st.empty() && (heights[i] < heights[st.peek()])) {
                    int idxTop = st.pop();
                    // remove the area of that index to get only the left side area
                    leftSmallest[idxTop] = ((idxTop - i) * heights[idxTop]) - heights[idxTop];
                }
                st.push(i);
            }
        }

        while (!st.empty()) {
            int idxTop = st.pop();
            // remove the area of that index to get only the left side area
            leftSmallest[idxTop] = ((idxTop + 1) * heights[idxTop]) - heights[idxTop];
        }

        for (int i = 0; i < heights.length; i++) {
            if (leftSmallest[i] + rightSmallest[i] > max) {
                max = leftSmallest[i] + rightSmallest[i];
            }
        }

        System.out.println(max);

    }
}
