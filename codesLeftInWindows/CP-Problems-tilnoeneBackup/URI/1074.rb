n = gets.to_i
    
for i in 1..n do
    x = gets.to_i
    res = ""
    if(x==0) then
        puts "NULL"
    else
        if(x%2==0) then
            res+="EVEN "
        else
            res+="ODD "
        end
        if(x>0) then
            res+="POSITIVE"
        else
            res+="NEGATIVE"
        end
        puts(res)
    end
end