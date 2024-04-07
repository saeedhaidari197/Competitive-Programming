import static java.lang.Integer.parseInt;
import static java.lang.Math.min;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class TxtComp {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int n = parseInt(input.nextLine());

		for (int i = 0; i < n; i++) {
			String[] line = input.nextLine().toLowerCase().split(" ", 2);
			int csize = parseInt(line[0]);
			String text = line[1];

			int inc = 1;
			Map<String, Integer> dict = new HashMap<>();
			for (int j = 0; j < text.length(); j += csize) {
				String chunk = text.substring(j, min(j + csize, text.length()));

				if (!dict.containsKey(chunk))
					dict.put(chunk, inc++);

				System.out.print(dict.get(chunk));
			}

			System.out.println();
		}

		input.close();
	}
}
