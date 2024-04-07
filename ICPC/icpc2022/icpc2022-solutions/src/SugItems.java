import static java.lang.Integer.parseInt;
import static java.lang.String.join;
import static java.util.Arrays.asList;
import static java.util.Comparator.reverseOrder;

import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Scanner;
import java.util.TreeSet;

public class SugItems {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int n = parseInt(input.nextLine());

		TreeSet<String> items = new TreeSet<>();
		Map<String, Map<String, Integer>> cts = new HashMap<>();

		for (int i = 0; i < n; i++) {
			String[] history = input.nextLine().split(">");
			items.addAll(asList(history));

			// count
			for (int j = 0; j < history.length - 1; j++) {
				if (!cts.containsKey(history[j]))
					cts.put(history[j], new HashMap<>());

				Map<String, Integer> tos = cts.get(history[j]);
				tos.put(history[j + 1], tos.getOrDefault(history[j + 1], 0) + 1);
			}
		}

		for (String item : items) {
			System.out.printf("%s:", item);

			// list and sort by count
			Map<Integer, TreeSet<String>> tos = new HashMap<>();
			Map<String, Integer> tmp = cts.get(item);
			if (tmp != null)
				for (Entry<String, Integer> e : tmp.entrySet()) {
					if (!tos.containsKey(e.getValue()))
						tos.put(e.getValue(), new TreeSet<>());
					tos.get(e.getValue()).add(e.getKey());
				}

			TreeSet<Integer> desc = new TreeSet<>(reverseOrder());
			desc.addAll(tos.keySet());

			for (int count : desc) {
				System.out.print(join(",", tos.get(count)));
			}

			System.out.println();
		}

		input.close();
	}
}
