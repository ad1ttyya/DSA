for (int i = 0; i < heights.size() - 1; i++) {
            int gap = (heights[i + 1] - heights[i]);
            if (heights[i] >= heights[i + 1]) {
                Bno++;
                continue;
            } else if (ladders > 0) {
                Bno++;
                ladders--;
                continue;
            } else if (gap <= bricks && bricks-gap >=0) {
                Bno++;
                bricks -= gap;
                continue;
            } else {
                break;
            }
        }