let datalist = document.querySelector('#marcas')
let botao = document.querySelector('#botao')
let marca = document.querySelector('#marca')
let msg = document.querySelector('#msg')
let marcas = []

fetch('https://parallelum.com.br/fipe/api/v1/carros/marcas')
.then(request => {
    request.json()
    .then(response => {
        for (dado of response) {
            marcas.push({
                "nome": dado.nome,
                "codigo": dado.codigo
            })

            let option = document.createElement('option')
            option.value = dado.nome
            datalist.appendChild(option)
        }
    })
})

botao.addEventListener('click', () => {
    for (m of marcas) {
        console.log(m, marca.value)
        if (m.nome == marca.value) {
            return msg.textContent = `Codigo: ${m.codigo}`
        } 
    }
    return msg.textContent = 'Marca não existente.'
})