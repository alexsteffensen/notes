

int main(void){

}

int tadd_ok(int x, int y){
    int sum = x + y // gets the sum
    int negative_overflow = x < 0 && y < 0 && sum >= 0; //if the two integers are negative, and the sum of them is positive, there is negative overflow.
    int positive_overflow = x >= 0 && y >= 0 && sum < 0; // if the two integers are 0 or positive, and the sum of them is negative, there is positive overflow
    return !negative_overflow && !positive_overflow; // returns true if both of dem are false.
}
