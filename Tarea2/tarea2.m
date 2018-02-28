format long
function derivate = porDelante(lambda, xi)
    errorRelativo = 100;
    h = ones
    xNext = xi + h; ## valor de Xi+1
    fi = 0.3*xi*xi*xi*xi - 0.15*xi*xi; #f(Xi)
    for i = (1:10)

        fiNext = 0.3*(xNext)*(xNext)*(xNext)*(xNext) - 0.15*(xNext)*(xNext); #f(Xi+1)
        printf("fi: %.20g\n", fi);
        derivate = (fiNext - fi) / (xNext - xi); 
        h*=lambda; 
        errorRelativo = abs(0.9 - derivate) / 0.9;
        xNext = xi + h;
    endfor
end

porDelante(0.2, 1);