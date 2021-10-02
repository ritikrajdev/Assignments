f=@(x) x-sqrt(29);
h=input("Input h:");
N=input("Input N:");
for i=-N:h:N
    if(f(i)*f(i+h)<0)
        a=i;
        b=i+h;
    end
end
if f(a)*f(b)>0
    disp('Invalid choice of values')
else
    p = (a+b)/2;
    e = abs(f(p));
    while e > 10^(-4)
        if f(a)*f(p) < 0
            b = p;
        else
            a = p;
        end
        p = (a+b)/2;
        e = abs(f(p));
    end
end
disp(p)