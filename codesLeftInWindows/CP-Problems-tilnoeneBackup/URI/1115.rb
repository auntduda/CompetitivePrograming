while(true) do
    ns = gets.chomp().split(' ')
    x = ns[0].to_i
    y = ns[1].to_i
    if(x==0 or y==0) then
        break
    end
    if(x>0) then
        if(y>0) then
    		puts("primeiro");
        else
    		puts("quarto");
        end
    else
        if(y>0) then
    		puts("segundo");
        else
            puts("terceiro");
        end
    end
end