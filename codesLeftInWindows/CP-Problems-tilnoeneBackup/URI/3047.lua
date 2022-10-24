m = io.read("*number")
a = io.read("*number")
b = io.read("*number")
c = m-a-b

if(a>b) then
    if(a>c) then
        print(a)
    else
        print(c)
    end
else
    if(b>c) then
        print(b)
    else
        print(c)
    end
end
