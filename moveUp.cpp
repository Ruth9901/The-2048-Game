// Function to perform an up move
void moveUp(int board[][SIZE], int& score) {
    shiftUp(board);
    mergeUp(board, score);
    shiftUp(board);
}
