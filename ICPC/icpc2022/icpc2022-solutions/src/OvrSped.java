import static java.lang.Double.parseDouble;
import static java.lang.Integer.parseInt;
import static java.util.Collections.min;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class OvrSped {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int n = parseInt(input.nextLine());

		// "p1->p2" => value
		Map<String, List<String>> al/* adjacency-list */ = new HashMap<>();
		Map<String, List<Double[]>> dl/* distance-limit(speed) */ = new HashMap<>();

		for (int i = 0;;) {
			String line = input.nextLine();

			if (line.isEmpty()) {
				al = new HashMap<>();
				dl = new HashMap<>();

				if (++i >= n)
					break;
				else {
					System.out.println();
					continue;
				}
			}

			String[] tmp = line.split(":");
			String p1 = tmp[0].split("->")[0];
			String p2 = tmp[0].split("->")[1];

			if (tmp[1].contains(",")) {
				if (!al.containsKey(p1))
					al.put(p1, new ArrayList<>());
				al.get(p1).add(p2);

				String[] values = tmp[1].split(",");
				if (!dl.containsKey(tmp[0]))
					dl.put(tmp[0], new ArrayList<>());
				dl.get(tmp[0]).add(new Double[] { parseDouble(values[0]), parseDouble(values[1]) });
			} else {
				Double tl /* time-limit */ = parseDouble(tmp[1]);

				List<Double> ps/* paths */ = new ArrayList<>();
				time(p1, p2, al, dl, new ArrayList<>(), ps, 0.0);

				if (ps.isEmpty()) {
					System.out.println("No");
				} else {
					System.out.println(min(ps) <= tl ? "Yes" : "No");
				}
			}
		}

		input.close();
	}

	private static void time(String p1, String p2, //
			Map<String, List<String>> al, //
			Map<String, List<Double[]>> dslm, //
			List<String> v, List<Double> ps, Double d) {
		// record all paths (time) to p2
		if (p1.equals(p2))
			ps.add(d);

		for (String x : al.getOrDefault(p1, new ArrayList<>())) {
			String c = p1 + "->" + x;
			for (Double[] dl : dslm.getOrDefault(c, new ArrayList<>())) {
				// avoid loop
				if (v.contains(c))
					continue;
				v.add(c);

				time(x, p2, al, dslm, v, ps, d + (dl[0] / dl[1] * 60));
			}
		}
	}
}
