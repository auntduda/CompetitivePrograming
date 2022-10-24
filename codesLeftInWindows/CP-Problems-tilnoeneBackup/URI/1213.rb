while n = gets
    n = n.to_i
    op = 1
    num = 1
    while num%n!=0 do
        num = (10*num+1)%n
        op+=1
    end
    
    puts(op)

end