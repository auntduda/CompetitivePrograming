escolha=1
		jogos=0
		vi=0
		vg=0
		emp=0
        while(escolha==1) do
            jogos+=1
            n = gets.chomp().split(' ')
			
			gi = n[0].to_i
            gg = n[1].to_i
            if(gi>gg) then
                vi+=1
            elsif(gi<gg) then
                vg+=1
            else
                emp+=1
            end
            puts "Novo grenal (1-sim 2-nao)"
            escolha = gets.to_i
        end
        puts "#{jogos} grenais"
        puts "Inter:#{vi}"
        puts "Gremio:#{vg}"
        puts "Empates:#{emp}"
        if(vi>vg) then
            puts "Inter venceu mais"
        else if(vi<vg) then
            puts "Gremio venceu mais"
        else
            puts "Nao houve vencedor"
        end
    end
