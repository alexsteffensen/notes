
long arith(long x, long y, long z){
    long p1 = z | y;
    long p2 = z >> 9;
    long p3 = ~p2;
    long p4 = p3 - y;
    return p4;
}

