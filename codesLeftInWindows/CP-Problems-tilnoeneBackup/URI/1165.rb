n = gets.to_i
for j in 1..n do
    v = gets.to_i
    div=0
    if(v==2) then
        puts("#{v} eh primo")
    elsif(v==1) then
        puts("#{v} nao eh primo")
    elsif(v%2==0) then
        puts("#{v} nao eh primo")
    else
        for i in 3..(v-1) do
            if(v%i==0) then
                div=1
                break
            end
            i+=1
        end
        if(div==0) then
            puts("#{v} eh primo")
        else
            puts("#{v} nao eh primo")
        end
    end
end