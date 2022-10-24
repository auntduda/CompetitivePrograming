n = gets.to_i
i=0
while i<n do
    ns = gets.chomp().split(' ')
    x = ns[0].to_i
    y = ns[1].to_i
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
    puts si
    i=i+1
end

