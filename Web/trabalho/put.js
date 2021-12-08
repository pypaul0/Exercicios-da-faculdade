function putEquipe(id, equipe) {
    const putUrl = url + '/' + id
    let requisicao = fetch(putUrl, {
        method: 'PUT',
        headers: {
            'content-type': 'application/json'
        },
        body: JSON.stringify(equipe)
    })

    requisicao.then(function (resposta) {
        if (resposta.status == 200) {
            getEquipeLista()
        }
    })
}

// Função que cria e retorna um formulario completo
function EquipeEditor(equipe) {

    // Cria os elementos do formulario na memoria
    let div = document.createElement('div')

    //Nome
    let inputNome = document.createElement('input')
    let inputNomeAdc = document.createElement('input')
    let inputNomeJg = document.createElement('input')
    let inputNomeMid = document.createElement('input')
    let inputNomeSup = document.createElement('input')
    let inputNomeTop = document.createElement('input')
    
    //id
    let inputIdAdc = document.createElement('input')
    let inputIdJg = document.createElement('input')
    let inputIdMid = document.createElement('input')
    let inputIdSup = document.createElement('input')
    let inputIdTop = document.createElement('input')
    let buttonEdit = document.createElement('input')

    // pendura os elementos dentro da div
    div.appendChild(buttonEdit)
    div.appendChild(inputNome)
    div.appendChild(inputNomeAdc)
    div.appendChild(inputNomeJg)
    div.appendChild(inputNomeMid)
    div.appendChild(inputNomeSup)
    div.appendChild(inputNomeTop)
    div.appendChild(inputIdAdc)
    div.appendChild(inputIdJg)
    div.appendChild(inputIdMid)
    div.appendChild(inputIdSup)
    div.appendChild(inputIdTop)

    // Atualizar as propriedades de cada elemento
    
    buttonEdit.type = "button"
    buttonEdit.value = "Salvar"

    inputNome.type = "text"
    inputNome.value = equipe.nome
    
    inputNomeAdc.type = "text"
    inputNomeAdc.value = equipe.adc.nome
    
    inputNomeJg.type = "text"
    inputNomeJg.value = equipe.jg.nome

    inputNomeMid.type = "text"
    inputNomeMid.value = equipe.mid.nome
    
    inputNomeSup.type = "text"
    inputNomeSup.value = equipe.sup.nome
    
    inputNomeTop.type = "text"
    inputNomeTop.value = equipe.top.nome
    
    inputIdAdc.type = "text"
    inputIdAdc.value = equipe.adc.id
    
    inputIdJg.type = "text"
    inputIdJg.value = equipe.jg.id
    
    inputIdMid.type = "text"
    inputIdMid.value = equipe.mid.id
    
    inputIdSup.type = "text"
    inputIdSup.value = equipe.sup.id
    
    inputIdTop.type = "text"
    inputIdTop.value = equipe.top.id



    // Acopla uma função para confirmar a edicao
    buttonEdit.addEventListener('click', function () {
        let equipeEditado = {
            nome: inputNome.value,
            top: {
                id: inputIdTop.value,
                nome: inputNomeTop.value
            },
            jg: {
                id: inputIdJg.value,
                nome: inputNomeJg.value
            },
            mid: {
                id: inputIdMid.value,
                nome: inputNomeMid.value
            },
            adc: {
                id: inputIdAdc.value,
                nome: inputNomeAdc.value
            },
            sup: {
                id: inputIdSup.value,
                nome: inputNomeSup.value
            },
        }

        putEquipe(equipe.id, equipeEditado)
    })

    return div
}