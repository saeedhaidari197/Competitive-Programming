import static java.lang.Integer.parseInt;

import java.util.Scanner;

public class P12To24 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int n = parseInt(input.nextLine());

		for (int i = 0; i < n; i++) {
			String time = input.nextLine().toLowerCase();

			String ext = null;
			if (time.endsWith("am")) {
				ext = "am";
				time = time.replaceAll("am", "");
			} else if (time.endsWith("pm")) {
				ext = "pm";
				time = time.replaceAll("pm", "");
			}

			String[] segs = time.split(":");

			int hrs = parseInt(segs[0]);
			int mins = parseInt(segs[1]);

			// convert to [0-24)
			if (hrs == 24 || ("am".equals(ext) && hrs == 12))
				hrs = 0;
			else if ("pm".equals(ext) && hrs != 12)
				hrs += 12;

			System.out.printf("%02d:%02d%s\n", //
					hrs % 12 == 0 ? 12 : hrs % 12, //
					mins, //
					hrs < 12 ? "am" : "pm");
		}

		input.close();
	}
}
