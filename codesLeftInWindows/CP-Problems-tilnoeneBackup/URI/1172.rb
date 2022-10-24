for i in 0..9 do
    v = gets.to_i
    if(v<=0) then
        v=1
    end
    puts("X[#{i}] = #{v}")
end