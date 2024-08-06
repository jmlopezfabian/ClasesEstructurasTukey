//https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/
void bubbleSort(int *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){

            if(arr[j] > arr[j+1]){
                int aux  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}

int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    bubbleSort(seats, seatsSize);
    bubbleSort(students, studentsSize);

    int moves = 0;

    for(int i=0; i<seatsSize; i++){
        moves += abs(seats[i] - students[i]);
    }

    return moves;
}
