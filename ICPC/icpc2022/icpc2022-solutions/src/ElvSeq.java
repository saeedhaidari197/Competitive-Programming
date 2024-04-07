import static java.lang.Integer.parseInt;
import static java.lang.Math.max;
import static java.lang.Math.min;
import static java.lang.String.valueOf;
import static java.util.Comparator.naturalOrder;
import static java.util.Comparator.reverseOrder;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ElvSeq {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int n = parseInt(input.nextLine());

		for (int i = 0; i < n; i++) {
			String[] line = input.nextLine().split(" ");
			List<Integer> lvls = new ArrayList<>();

			for (int j = 0; j < line.length; j++) {
				int lvl = parseInt(line[j]);

				// avoid duplicates
				if (!lvls.contains(lvl))
					lvls.add(lvl);
			}

			List<String> res = new ArrayList<>();

			if (lvls.size() > 1)
				for (int j = 0; j < lvls.size() - 1;) {
					int cur = lvls.remove(0), next = lvls.get(0);

					List<Integer> lls = new ArrayList<>();
					lls.add(cur);

					// find all levels between current and next entered level
					for (int k = 1; k < lvls.size();) {
						int ll = lvls.get(k);
						if (ll > min(cur, next) && ll < max(cur, next))
							lls.add(lvls.remove(k));
						else
							k++;
					}

					// sort based on the order
					if (cur < next) // going up
						lls.sort(naturalOrder());
					else // going down
						lls.sort(reverseOrder());

					for (int ll : lls)
						res.add(valueOf(ll));
				}

			res.add(valueOf(lvls.get(0)));

			System.out.println(String.join(" ", res));
		}

		input.close();
	}
}
