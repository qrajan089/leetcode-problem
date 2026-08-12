 class Solution {
    public List<List<Integer>> shiftGrid(int[][] grid, int k) {
        
        int rows = grid.length;
        if (rows == 0) {
            return new ArrayList<>();
        }
        int cols = grid[0].length;
        int total = rows * cols;
        int shift = k % total;
        List<List<Integer>> result = new ArrayList<>(rows);

        for (int i = 0; i < rows; i++) {
            result.add(new ArrayList<>());
            for (int j = 0; j < cols; j++) {
                result.get(i).add(0);
            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int idx = (i * cols + j + shift) % total;
                result.get(idx / cols).set(idx % cols, grid[i][j]);
            }
        }

        return result;
    }
}
