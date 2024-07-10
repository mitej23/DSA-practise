package Java.stack;

import java.util.Stack;

public class N1_ValidParenthesis {
	public static boolean main(String[] args) {

		String s = "()[]{}";

		Stack<Character> st = new Stack<Character>();

		for (int i = 0; i < s.length(); i++) {
			char c = s.charAt(i);
			if (c == '(' || c == '{' || c == '[') {
				st.push(s.charAt(i));
			} else if (c == ')' || c == '}' || c == ']') {
				if (!st.isEmpty()) {
					char topCh = st.pop();
					if (!((topCh == '(' && c == ')') || (topCh == '[' && c == ']') || (topCh == '{' && c == '}'))) {
						return false;
					}
				} else {
					return false;
				}
			}
		}

		if (!st.isEmpty())
			return false;

		return true;

	}
}
