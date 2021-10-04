clc;
f=@(x) x^2-29;
h=1;
N=10;
e=0.001;

for i = -N:h:N
    if f(i)*f(i+h)<0
        a=i;
        b=i+h;
        break;
    end
end

while (abs(a-b)>e)
    c=(a+b)/2;
    if (f(c)==0)
        fprintf('%f is the root',c);
        break;
    elseif ((f(a))*(f(c))<0)
        b=c;
    else
        a=c;
    end
end
fprintf('%f is the root', c);