void main() {
    int i;
    TRISB = 0;
    TRISC = 0;
    while (1) {
        PORTC = 0b00001001;
        PORTB = 0b10000001;
        for (i = 0; i <100; i++);
        PORTC = 0b00000110;
        PORTB = 0b01111110;
        for (i = 0; i <100; i++);
        PORTC = 0b00010000;
        PORTB = 0b00001110;
        for (i = 0; i <100; i++);
        PORTC = 0b01100000;
        PORTB = 0b01101110;
        for (i = 0; i <100; i++);
        PORTC = 0b10000000;
        PORTB = 0b01110001;
        for (i = 0; i <100; i++);
    }
}