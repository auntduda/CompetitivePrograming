while true do
    n = io.read("*number")
    if n == 0 then break end
    cx = io.read("*number")
    cy = io.read("*number")
    
    for i=1, n do
        x = io.read("*number")
        y = io.read("*number")
        
        if x == cx or y == cy then
            print("divisa")
        elseif x > cx then 
            if y > cy then
                print("NE")
            else
                print("SE")
            end
        
        else
            if y > cy then
                print("NO")
            else
                print("SO")
            end

        end
        
    end

end