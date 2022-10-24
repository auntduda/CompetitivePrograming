m1=0
m2=0
m3=0
m4=0
n = io.read("*number")

for i=1,n do
    v = io.read("*number")
    if(v%2==0) then
        m1=m1+1
    end
    if(v%3==0) then
        m2=m2+1
    end
    if(v%4==0) then
        m3=m3+1
    end
    if(v%5==0) then
        m4=m4+1
    end
end

print(m1.." Multiplo(s) de 2")
print(m2.." Multiplo(s) de 3")
print(m3.." Multiplo(s) de 4")
print(m4.." Multiplo(s) de 5")
