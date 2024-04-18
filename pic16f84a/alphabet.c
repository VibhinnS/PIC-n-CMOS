//A
void main() {
    int i;
    TRISB = 0;
    while (1) {
        PORTA = 0b00000001;
        PORTB = 0b00000001;
        for (i = 0; i <100; i++);
        PORTA = 0b00000001;
        PORTB = 0b11110110;
        for (i = 0; i <100; i++);
        PORTA = 0b00000100;
        PORTB = 0b11110110;
        for (i = 0; i <100; i++);
        PORTA = 0b00001000;
        PORTB = 0b00000001;
        for (i = 0; i <100; i++);
    }
}


//B
void main() {
    int i;
    TRISB = 0;
    while (1) {
        PORTA = 0b00000001;
        PORTB = 0b01000001;
        for (i = 0; i <100; i++);
        PORTA = 0b00000001;
        PORTB = 0b00111110;
        for (i = 0; i <100; i++);
        PORTA = 0b00000100;
        PORTB = 0b00111110;
        for (i = 0; i <100; i++);
        PORTA = 0b00001000;
        PORTB = 0b00111110;
        for (i = 0; i <100; i++);
    }
}

//C
void main() {
    int i;
    TRISB = 0;
    while (1) {
        PORTA = 0b00000001;
        PORTB = 0b00000000;
        for (i = 0; i <100; i++);
        PORTA = 0b00000010;
        PORTB = 0b00110110;
        for (i = 0; i <100; i++);
        PORTA = 0b00000100;
        PORTB = 0b00110110;
        for (i = 0; i <100; i++);
        PORTA = 0b00001000;
        PORTB = 0b01001001;
        for (i = 0; i <100; i++);
    }
}