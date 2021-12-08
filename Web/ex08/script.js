let botao = document.querySelector('#confirmar')
let nome = document.querySelector('#nome')
let genero = document.querySelector('#genero')
let img = document.querySelector('#img')

botao.addEventListener('click', () => {
    let conteudo = document.createElement('div')
    conteudo.id = 'conteudo'
    conteudo.innerHTML = `<span>Nome: ${nome.value}</span><br><span>Genero: ${genero.value}<br><img src="${img.value}">`
    document.body.appendChild(conteudo)
})