void main() {
    int i;
    TRISB = 0;
    while (1) {
        //bwd
        PORTB = 0x03;
        for (i = 0; i <100; i++);
        PORTB = 0x06;
        for (i = 0; i <100; i++);
        PORTB = 0x0C;
        for (i = 0; i <100; i++);
        PORTB = 0x09;
        for (i = 0; i <100; i++);
    }
}