//URL de requisição
const url = 'https://projetofinal-ppw.herokuapp.com/api/123696'

let champs = []
let equipes = []

//-----

async function fetchCampeao() {
    await fetch('http://ddragon.leagueoflegends.com/cdn/11.23.1/data/pt_BR/champion.json')
        .then(request => {
            request.json()
                .then(response => {
                    for (camp in response.data) {
                        dado = response.data[camp]

                        let campeao = {
                            id: dado.id,
                            nome: dado.name,
                            tag: dado.tags[0],
                            img: `http://ddragon.leagueoflegends.com/cdn/img/champion/loading/${dado.id}_0.jpg`,
                            icon: `http://ddragon.leagueoflegends.com/cdn/11.23.1/img/champion/${dado.id}.png`
                        }
                        champs.push(campeao)
                        addDataList(campeao.nome)
                    }
                })
        })
}

function addDataList(nome) {
    datalist = document.querySelector('datalist')
    option = document.createElement('option')
    option.textContent = nome
    datalist.appendChild(option)
}

function mostrarCampeao() {
    div = document.querySelectorAll('.lane')
    input = document.querySelectorAll('.inputNome')
    icon = document.querySelectorAll('.champ')

    for (let cont = 0; cont < 5; cont++) {
        input[cont].addEventListener('keypress', () => {
            champs.map(champ => {
                if (input[cont].value.toLowerCase() == champ.nome.toLowerCase()) {
                    nome = div[cont].querySelector('h3')
                    img = div[cont].querySelector('.splash')
                    tags = div[cont].querySelector('.classe')

                    nome.textContent = champ.nome
                    icon[cont].src = champ.icon
                    img.src = champ.img
                    tags.src = `.\\img\\classes\\${champ.tag}.webp`
                }
            })
        })
    }
}

function postCampeao() {
    
    //Json Time/Equipe
    let time = {
        nome: null,
        top: {
            id: null,
            nome: null
        },
        jg: {
            id: null,
            nome: null
        },
        mid: {
            id: null,
            nome: null
        },
        adc: {
            id: null,
            nome: null
        },
        sup: {
            id: null,
            nome: null
        },
    }

    let div = document.querySelectorAll('.lane')
    document.querySelector('#confirmar').addEventListener('click', () => {
        time.nome = document.querySelector('#nome').value
        for (let cont = 0; cont < 5; cont++) {
            champs.map(champ => {
                if (div[cont].querySelector('h3').textContent.toLocaleLowerCase() == champ.nome.toLowerCase()) {
                    if (cont == 0) {
                        time.top.id = champ.id
                        time.top.nome = champ.nome
                    } else if (cont == 1) {
                        time.jg.id = champ.id
                        time.jg.nome = champ.nome
                    } else if (cont == 2) {
                        time.mid.id = champ.id
                        time.mid.nome = champ.nome
                    } else if (cont == 3) {
                        time.adc.id = champ.id
                        time.adc.nome = champ.nome
                    } else if (cont == 4) {
                        time.sup.id = champ.id
                        time.sup.nome = champ.nome
                    }
                }
            })
        }

        fetch(url, {
            method: 'POST',
            body: JSON.stringify(time),
            headers: {
                'content-type': 'application/json'
            }
        })

        .then(requisicao => {
            if(requisicao.status == 200) {
                getEquipeLista()
            }
        })
        
        

    })
}



const listaEquipeHTML = document.querySelector("#listaEquipe")

function getEquipeLista(){
    let requisicao = fetch(url)
    requisicao.then(function(resposta){
        resposta.json().then(function(vetorEquipes){
            equipes = vetorEquipes
            atualizarLista(equipes)
        })
    })
}

function imprimirEquipe(equipe){
    let div = document.createElement("div")
    let botaoDeletar = document.createElement("input")
    let botaoEditar = document.createElement("input")

    //Deletar Registro
    botaoDeletar.type = "button"
    botaoDeletar.value = "Deletar"

    botaoDeletar.onclick = function(){
       //Lança método para deletação
        DeleteEquipe(equipe.nome);
    }

    //Editar Registro
    botaoEditar.type = "button"
    botaoEditar.value = "Editar"
    botaoEditar.addEventListener('click', function(){
        
                   //Lança método para edição
       let form =  EquipeEditor(equipe)
       div.appendChild(form)
    })

    let layout = `<h3>${equipe.nome}</h3>
    <span>Topo: ${equipe.top.nome}</span>
    <span>Caçador: ${equipe.jg.nome}</span>
    <span>Meio: ${equipe.mid.nome}</span>
    <span>Atirador: ${equipe.adc.nome}</span>
    <span>Suporte: ${equipe.sup.nome}</span>`

    div.className = 'equipes'
    div.innerHTML = layout
    div.appendChild(botaoDeletar)
    div.appendChild(botaoEditar)
    listaEquipeHTML.appendChild(div)
}

function atualizarLista(equipes){
    listaEquipeHTML.innerHTML = ""

    // imprimir lista
    for(let equipe of equipes){
        imprimirEquipe(equipe)
    }
}

getEquipeLista()
postCampeao()
mostrarCampeao()
fetchCampeao()