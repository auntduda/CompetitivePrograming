while n = gets.to_i
    if n == 0 then break end
    
    a = 0
    b = 0
    for i in 1..n do
        v = gets.split(' ')
        
        if v[0].to_i > v[1].to_i then
            a += 1
        elsif v[0].to_i < v[1].to_i then
            b += 1
        end
        
    end

    puts a.to_s + ' ' + b.to_s
end