#calcula el estimado y su error

function currEstimate = expoError(n, x)
    realValue = exp(x);
    preEstimate = 0;
    kFac = 1;
    xToTheK = 1;
    currEstimate = 0;
    eaE = 100;
    i = 1; #counter
    esE = scarboroughError(n);
    etE = 100;
    printf("The real value is: %.10g\n", realValue);
    printf("N\tCurrent Value       \t\tReal Error\t      Aproximate Error\n");
    while (eaE > esE)
        etE = (realValue - currEstimate) * 100 / realValue;
        preEstimate = currEstimate;
        currEstimate += xToTheK / kFac;
        eaE = (currEstimate - preEstimate) * 100 / currEstimate;
        xToTheK *= x;
        kFac *= i;
        printf("%2d\t", i);
        printf("%20.13g\t", currEstimate);
        printf("%20.13g    \t",etE);
        printf("%20.13g\n", eaE);
        ++i;
    endwhile
    return;
endfunction

#calcula el error de scarborough
function es = scarboroughError(n)
    dec = 1;
    for i = (1:n)
        dec /= 10;
    endfor
    es=(0.5 * dec)*100;
    printf("The threshold is: %.20g\n", es);
    return;
endfunction

