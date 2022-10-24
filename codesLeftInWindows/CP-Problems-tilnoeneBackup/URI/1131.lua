escolha=1
		jogos=0
		vi=0
		vg=0
		emp=0
        while(escolha==1) do
            jogos=jogos+1
			
			gi = io.read("*number")
            gg = io.read("*number")
            if(gi>gg) then
                vi=vi+1
            elseif(gi<gg) then
                vg=vg+1
            else
                emp=emp+1
            end
            print("Novo grenal (1-sim 2-nao)")
            escolha = io.read("*number")
        end
        print(jogos.." grenais")
        print("Inter:"..vi)
        print("Gremio:"..vg)
        print("Empates:"..emp)
        if(vi>vg) then
            print("Inter venceu mais")
        else if(vi<vg) then
            print("Gremio venceu mais")
        else
            print("Nao houve vencedor")
        end
    end
