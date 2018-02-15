format long;
function result = expoError(n, x)
    kFac = 1;
    xToTheK = 1;
    result = 0;
    for i = (1:n-1)
        result += xToTheK / kFac;
        printf("%.5g / %.5g = %.5g acumulate %.5g\n", xToTheK, kFac, xToTheK/kFac, result);

        xToTheK *= x;
        kFac *= i;
    endfor
    return;
endfunction

r = expoError(1000, 2);
printf("result: %.5g\n", r);
