while true do
    t = gets.to_i
    if(t==0) then break end
    for i in 1..t do
        v = gets.to_i
        if(v%2==0) then puts((v-1)*2)
        else puts((v*2-1)) end
    end
end