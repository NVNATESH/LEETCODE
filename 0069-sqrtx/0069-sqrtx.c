int mySqrt(int x) {
    if(x == 1 ){
        return x;
    }
    long square = x / 2;
    while(square * square > x){
        square = (square + x / square) / 2;
    }
  return square;
}