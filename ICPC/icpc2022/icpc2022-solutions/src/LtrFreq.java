import static java.lang.Integer.parseInt;
import static java.util.Comparator.reverseOrder;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeSet;

public class LtrFreq {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int n = parseInt(input.nextLine());

		for (int i = 0; i < n; i++) {
			String line = input.nextLine().toLowerCase();

			Map<Character, Integer> chars = new HashMap<>();
			for (char ch : line.toCharArray()) {
				if (ch < 'a' || ch > 'z')
					continue;

				chars.put(ch, chars.getOrDefault(ch, 0) + 1);
			}

			Map<Integer, TreeSet<Character>> counts = new HashMap<>();
			chars.forEach((ch, ct) -> {
				if (!counts.containsKey(ct))
					counts.put(ct, new TreeSet<>());

				counts.get(ct).add(ch);
			});

			TreeSet<Integer> order = new TreeSet<>(reverseOrder());
			order.addAll(counts.keySet());

			for (int count : order) {
				counts.get(count).forEach(c -> System.out.print(c));
			}

			System.out.println();
		}

		input.close();
	}
}
