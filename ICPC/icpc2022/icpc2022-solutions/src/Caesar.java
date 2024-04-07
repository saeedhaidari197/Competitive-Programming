import static java.lang.Integer.parseInt;

import java.util.Scanner;

public class Caesar {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int n = parseInt(input.nextLine());

		for (int i = 0; i < n; i++) {
			String[] segs = input.nextLine().split(" ");

			String action = segs[0], text = segs[2];
			int shift = parseInt(segs[1]);

			if (action.equalsIgnoreCase("encrypt") || action.equalsIgnoreCase("decrypt")) {
				System.out.println(shift(text, shift));
			}
		}

		input.close();
	}

	private static String shift(String text, int shift) {
		StringBuffer result = new StringBuffer();

		for (int c : text.toCharArray()) {
			c += shift;

			if (c < 'a') {
				c = 'z' - ('a' - c) + 1;
			} else if (c > 'z') {
				c = (c - 'z') + 'a' - 1;
			}

			result.append((char) c);
		}

		return result.toString();
	}

}
