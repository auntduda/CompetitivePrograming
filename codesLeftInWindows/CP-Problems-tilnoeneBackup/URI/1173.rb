v = gets.to_i
ant = v
for i in 0..9 do
    if(i!=0) then
        ant = ant*2
    end
    puts("N[#{i}] = #{ant}")
end