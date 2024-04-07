import static java.lang.Double.parseDouble;
import static java.lang.Integer.parseInt;
import static java.lang.Math.max;
import static java.lang.Math.round;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class BarChart {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int n = parseInt(input.nextLine());

		for (int i = 0; i < n; i++) {
			String[] line = input.nextLine().split(" ");

			int w = parseInt(line[0]);

			String symbol = line[1];

			List<CvPair> columns = new ArrayList<>();
			double max = -1;
			for (int j = 2; j < line.length; j++) {
				String[] pair = line[j].split(":");

				CvPair tmp = new CvPair();
				tmp.column = pair[0];
				tmp.value = parseDouble(pair[1]);

				columns.add(tmp);
				max = max(max, tmp.value);
			}

			for (CvPair pair : columns) {
				System.out.printf("%5s: %s %6.2f\n", //
						pair.column, //
						symbol.repeat((int) round(w * (pair.value / max))), //
						pair.value);
			}
		}

		input.close();
	}

	static class CvPair {
		String column;
		double value;
	}
}
