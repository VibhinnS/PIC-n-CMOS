//alternate sandglass
void main(){
    int i,j,k;
    j = 0b00000001;
    TRISB = 0;
    while (1) {
        for (i=0; i<7;i++) {
            PORTB = j<<i;
            for (k-0;k<100;k++);
        }
    }
}

//complete sandglass
void main() {
    TRISB = 0x00;
    PORTB = 0x00;

    while (1) {
        for (int i = 0; i <10000; i++);
        PORTB = 0x00;
        for (int i = 0; i <10000; i++);
        PORTB = 0x80;
        for (int i = 0; i <10000; i++);
        PORTB = 0xC0;
        for (int i = 0; i <10000; i++);
        PORTB = 0xE0;
        for (int i = 0; i <10000; i++);
        PORTB = 0xF0;
        for (int i = 0; i <10000; i++);
        PORTB = 0xF8;
        for (int i = 0; i <10000; i++);
        PORTB = 0xFC;
        for (int i = 0; i <10000; i++);
        PORTB = 0xFE;
        for (int i = 0; i <10000; i++);
        PORTB = 0xFF;
    }
}