// commom cathode
void main() {
    int i;
    TRISB = 0;
    while (1){
        PORTB = 0x3F;
        for (int i = 0; i <10000; i++);
        PORTB = 0x06;
        for (int i = 0; i <10000; i++);
        PORTB = 0x5B;
        for (int i = 0; i <10000; i++);
        PORTB = 0x4F;
        for (int i = 0; i <10000; i++);
        PORTB = 0x66;
        for (int i = 0; i <10000; i++);
        PORTB = 0x6D;
        for (int i = 0; i <10000; i++);
    }
}

//common anode
void main() {
    int i;
    TRISB = 0;
    while (1) {
        PORTB = 0xC0;
        for (int i = 0; i <10000; i++);
        PORTB = 0xF9;
        for (int i = 0; i <10000; i++);
        PORTB = 0xA4;
        for (int i = 0; i <10000; i++);
        PORTB = 0xB0;
        for (int i = 0; i <10000; i++);
        PORTB = 0x99;
        for (int i = 0; i <10000; i++);
        PORTB = 0x92;
        for (int i = 0; i <10000; i++);

    }
}