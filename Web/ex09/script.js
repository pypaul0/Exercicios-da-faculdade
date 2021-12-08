let meses = ['Fevereiro', 'Março', 'Abril', 'Maio', 'Junho', 'Julho', 'Agosto']

let ano = document.createElement('select')
let mes = document.createElement('select')
let dia = document.createElement('select')

for(let i = 0; i < 10; i++) {
    let option = document.createElement('option')
    option.text = `${1990 + i}`
    ano.appendChild(option)
}

for (m of meses) {
    let option = document.createElement('option')
    option.text = `${m}`
    mes.appendChild(option)
}

for(let i = 5; i <= 25; i++) {
    let option = document.createElement('option')
    option.text = `${i}`
    dia.appendChild(option)
}

document.body.appendChild(ano)
document.body.appendChild(mes)
document.body.appendChild(dia)