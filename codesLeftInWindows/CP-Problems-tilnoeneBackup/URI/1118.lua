escolha=0
        x=-1
        while(true) do
            n = io.read("*number")
            if(n>=0 and n<=10) then
                if(x==-1) then
                    x=n
                else
                    y=n
                    break
                end
            else
                print("nota invalida")
            end
        end
		print(string.format("media = %0.02f", (((x+y)/2)))) 
        
        while(escolha~=2) do
            if(escolha~=1 and escolha~=2) then
                print("novo calculo (1-sim 2-nao)")
                escolha=2
                escolha = io.read("*number")
            elseif(escolha==1) then
                x=-1
                while(true) do
                    n = io.read("*number")
                    if(n>=0 and n<=10) then
                        if(x==-1) then
                            x=n
                        else
                            y=n
                            break
                        end
                    else
                        print("nota invalida")
                    end
                end
                print(string.format("media = %0.02f", (((x+y)/2)))) 
                print("novo calculo (1-sim 2-nao)")
                escolha = io.read("*number")
            else
                break
            end
        end