n = io.read("*number")
i=0
while i<n do
    x = io.read("*number")
    y = io.read("*number")
    si=0
    if(x>y) then
        temp=x
        x=y
        y=temp
    end
    if(x%2==0) then
        x=x+1
    else
        x=x+2
    end
    j=x
    while j<y do
        si=si+j
        j=j+2
    end
    print(si)
    i=i+1
end

