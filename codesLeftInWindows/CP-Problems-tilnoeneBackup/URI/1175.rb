n = {}
for i in 0..19 do
    n[i] = gets.to_i
end
for i in 0..19 do
    puts("N[#{i}] = #{n[19-i]}")
end