ls = gets.chomp().split(' ')

p = ls[0].to_i
j1 = ls[1].to_i
j2 = ls[2].to_i
r = ls[3].to_i
a = ls[4].to_i

if(r==1) then
    if(a==1) then
        puts("Jogador 2 ganha!")
    else
        puts("Jogador 1 ganha!")
    end
else
    if(a==1) then
        puts("Jogador 1 ganha!")
    else
        if((j1+j2)%2==0) then
            if(p==1) then
                puts("Jogador 1 ganha!")
            else
                puts("Jogador 2 ganha!")
            end
        else
            if(p==1) then
                puts("Jogador 2 ganha!")
            else
                puts("Jogador 1 ganha!")
            end
        end
    end

end