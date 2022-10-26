package DP;

public class WineProblem {

	public static void main(String[] args) {
		int[] wine = { 2, 3, 5, 1, 4 };
		System.out.println(WPRecursion(wine, 0, wine.length - 1, 1));
		System.out.println(WPRecursion(wine, 0, wine.length - 1));
		System.out.println(WPTD(wine, 0, wine.length - 1, new int[wine.length][wine.length]));
		System.out.println(WPBU(wine));
	}

	public static int WPRecursion(int wine[], int si, int ei, int yr) {
		if (si == ei) {
			return wine[si] * yr;
		}
		int start = WPRecursion(wine, si + 1, ei, yr + 1) + wine[si] * yr;
		int end = WPRecursion(wine, si, ei - 1, yr + 1) + wine[ei] * yr;
		return Math.max(start, end);
	}

	public static int WPRecursion(int wine[], int si, int ei) {
		int yr = wine.length - (ei - si + 1) + 1;
		if (si == ei) {
			return wine[si] * yr;
		}
		int start = WPRecursion(wine, si + 1, ei) + wine[si] * yr;
		int end = WPRecursion(wine, si, ei - 1) + wine[ei] * yr;
		return Math.max(start, end);
	}

	public static int WPTD(int wine[], int si, int ei, int[][] strg) {
		int yr = wine.length - (ei - si + 1) + 1;
		if (si == ei) {
			return wine[si] * yr;
		}
		if (strg[si][ei] != 0) {
			return strg[si][ei];
		}
		int start = WPTD(wine, si + 1, ei, strg) + wine[si] * yr;
		int end = WPTD(wine, si, ei - 1, strg) + wine[ei] * yr;
		int ans = Math.max(start, end);
		strg[si][ei] = ans;
		return ans;
	}

	public static int WPBU(int wine[]) {
		int n = wine.length;
		int[][] strg = new int[n][n];

		for (int slide = 0; slide <= n - 1; slide++) {
			for (int si = 0; si <= n - slide - 1; si++) {
				int ei = si + slide;
				int yr = wine.length - (ei - si + 1) + 1;
				if (si == ei) {
					strg[si][ei] = wine[si] * yr;
				} else {
					int start = strg[si + 1][ei] + wine[si] * yr;
					int end = strg[si][ei - 1] + wine[ei] * yr;
					int ans = Math.max(start, end);
					strg[si][ei] = ans;
				}
			}
		}
		return strg[0][n - 1];
	}

}
