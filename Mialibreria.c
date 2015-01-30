float somma(float a, float b) {

    float risultato;

    risultato = a + b;

    return risultato;

}



float sottrazione(float a, float b) {

    float risultato;

    risultato = a - b;

    return risultato;

}



float prodotto(float a, float b) {

    float risultato;

    risultato = a * b;

    return risultato;

}



float divisione(float a, float b) {

    float risultato;

    risultato = a / b;    

    return risultato;

}



int quoziente(int a, int b) {

    int risultato;

     risultato = a / b;

    return risultato;

}



float frazionale(int a, int b) {

    float risultato;

    risultato = ((float)a/(float)b)- a/b;  

    return risultato;

}



float potenza(float base, int esponente) {

    float risultato = 1;

    for(; esponente > 0; esponente--)

        risultato *= base;
    
    return risultato;

}
