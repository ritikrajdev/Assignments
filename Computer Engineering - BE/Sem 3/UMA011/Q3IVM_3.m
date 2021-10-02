syms x; f=@(x) x.^3+4*x.^2-10;
a=1;
b=2;
count=0;
while(abs(a-b)>0.001)
    c=(a+b)/2;
    count=count+1;
    if f(a)*f(c)<0
        b=c;
    else
        a=c;
    end
end
disp(c)
disp(count);