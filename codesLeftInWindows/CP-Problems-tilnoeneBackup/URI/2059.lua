p = io.read("*number")
j1 = io.read("*number")
j2 = io.read("*number")
r = io.read("*number")
a = io.read("*number")

if(r==1) then
    if(a==1) then
        print("Jogador 2 ganha!")
    else
        print("Jogador 1 ganha!")
    end
else
    if(a==1) then
        print("Jogador 1 ganha!")
    else
        if((j1+j2)%2==0) then
            if(p==1) then
                print("Jogador 1 ganha!")
            else
                print("Jogador 2 ganha!")
            end
        else
            if(p==1) then
                print("Jogador 2 ganha!")
            else
                print("Jogador 1 ganha!")
            end
        end
    end

end