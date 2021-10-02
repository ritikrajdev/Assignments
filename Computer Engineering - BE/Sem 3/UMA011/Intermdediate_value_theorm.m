str = input('Give an equation in x: ','s')  ;
f = inline(str,'x') ;
N = input('giv n');
h=1;
for i = -N : h : N
if (f(i)*f(i + h)) < 0
a = i 
b = i + h
end
end
fprintf("%i %i",a,b);
p=(a+b)/2;
e=abs(f(p));
while e>10^(b-a
    if f(a)*f(p)<0
        b=p;
    else
        a=p;
    end
    p=(a+b)/2;
    e=abs(f(p));
end
fprintf("%i",p);