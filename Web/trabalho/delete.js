async function DeleteEquipe(nome) {
    let cont = 0

    await fetch(url)
    .then(requisicao => {
        requisicao.json()
        .then(resposta => {
            for(dado of resposta) {
                if (dado.nome == nome) {
                    console.log(cont + ' ' + nome)
                    break
                }
                cont += 1
            }
            console.log("Deletando Equipe " + nome)
            const delete_url = url + '/' + cont
            fetch(delete_url, {
                method: 'DELETE'
            })
            .then(function(resposta){
                if(resposta.status == 200){
                    getEquipeLista()
                }
            })
        })
    })
}