while true do
    n = gets.to_i
    
    if n == 0 then break end
    
    ls = gets.split(' ')
    cx = ls[0].to_i
    cy = ls[1].to_i
    
    for i in 1..n do
        ls2 = gets.split(' ')
        x = ls2[0].to_i
        y = ls2[1].to_i
        
        if x == cx or y == cy then
            puts("divisa")
        elsif x > cx then 
            if y > cy then
                puts("NE")
            else
                puts("SE")
            end
        
        else
            if y > cy then
                puts("NO")
            else
                puts("SO")
            end

        end
        
    end
    
    
end