int findCenter(int** edges, int edgesSize, int* edgesColSize) {
    // int arr[100001] = {0};
    // int result;
    // for (int i = 0; i < edgesSize; i++) {
    //     for (int j = 0; j < edgesColSize[i]; j++) {
    //         arr[edges[i][j]]++;
    //     }
    // }
    // for (int i = 0; i < 100001; i++) {
    //     if (arr[i] != 0 && arr[i] != 1) {
    //         result = i;
    //         break;
    //     }
    // }
    // return result;
    if ((edges[0][0] == edges[1][0]) || (edges[0][0] == edges[1][1]))
        return edges[0][0];
    return edges[0][1];
}
