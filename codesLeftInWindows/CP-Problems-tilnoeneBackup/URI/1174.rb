for i in 0..99 do
    v = gets.to_f
    if(v<=10) then
        puts "A[#{i}] = %0.01f" % v.round(1)
    end
end