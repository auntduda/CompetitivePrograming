escolha=0;
        x=-1;
        while(true) do
            n = gets.to_f
            if(n>=0 && n<=10) then
                if(x==-1) then
                    x=n;
                else
                    y=n;
                    break;
                end
            else
                puts("nota invalida");
            end
        end
        puts "media = %0.02f" % ((x+y)/2)
        
        while(escolha!=2) do
            if(escolha!=1 && escolha!=2) then
                puts("novo calculo (1-sim 2-nao)");
                escolha=2;
                escolha = gets.to_i
            elsif(escolha==1) then
                x=-1;
                while(true) do
                    n = gets.to_f
                    if(n>=0 && n<=10) then
                        if(x==-1) then
                            x=n;
                        else
                            y=n;
                            break;
                        end
                    else
                        puts("nota invalida");
                    end
                end
                puts "media = %0.02f" % ((x+y)/2)
                puts("novo calculo (1-sim 2-nao)");
                escolha = gets.to_i
            else
                break;
            end
        end