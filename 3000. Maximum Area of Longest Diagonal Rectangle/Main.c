int areaOfMaxDiagonal(int** dimensions, int dimensionsSize, int* dimensionsColSize) {
    int maxArea = 0;
    int maxDiagonalSquared = 0;

    for(int i = 0; i < dimensionsSize; i++){
        int length = dimensions[i][0];
        int width = dimensions[i][1];

        int diagonalSquared = length * length + width * width;
        int area = length * width;

        if(diagonalSquared > maxDiagonalSquared){
            maxDiagonalSquared = diagonalSquared;
            maxArea = area;
        }

        else if(diagonalSquared == maxDiagonalSquared){
            if(area > maxArea){
                maxArea = area;
            }
        }
    }

    return maxArea;
}
