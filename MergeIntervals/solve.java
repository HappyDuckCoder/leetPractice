class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> a[0] - b[0]);
        List<int[]> res = new ArrayList<>();
        for (int[] interval : intervals) {
            if (res.size() == 0 || res.get(res.size() - 1)[1] < interval[0]) {
                res.add(interval);
            } else {
                res.get(res.size() - 1)[1] = Math.max(res.get(res.size() - 1)[1], interval[1]);
            }
        }
        return res.toArray(new int[res.size()][]);
    }
}

public class Main {
    public static void main(String[] args) {
        int[][] intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
        Solution s = new Solution();
        int[][] res = s.merge(intervals);
        for (int[] interval : res) {
            System.out.println(Arrays.toString(interval));
        }
    }
}