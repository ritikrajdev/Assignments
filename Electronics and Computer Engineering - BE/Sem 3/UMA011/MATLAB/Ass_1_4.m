clc;
t=1/(18.99+273);
f=@(r) 1.129241*10^-3 + 2.341077*10^-4*2.303*log(r) + 8.775468*10^-8*((2.303)*log(r))^3-t;

h=1;
N=10^4;
e=0.001;

for(i = 0:h:N)
    if f(i)*f(i+h)<0
        a=i;
        b=i+h;
        break;
    end
end
a
b
while(abs(a-b)>e)
    c=(a+b)/2;
    if (f(c)==0)
        fprintf('%f is the resistance ', c);
        break;
    elseif ((f(a)*f(c))<0)
        b=c;
    else
        a=c;
    end
end
fprintf('%f is the resistance', c);