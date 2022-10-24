function min(a, b)
   if a > b then
       return b
    else return a end
end

a = {}

a[1] = io.read("*number")
a[2] = io.read("*number")
a[3] = io.read("*number")

t1=a[2]*2+a[3]*4;
t2=a[1]*2+a[3]*2;
t3=a[1]*4+a[2]*2;

print(min(min(t1, t2), t3))