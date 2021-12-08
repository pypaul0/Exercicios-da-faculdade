let botao = document.getElementById('enviar')
let texto = document.getElementById('texto')

botao.addEventListener('click', () => {
    texto.innerText = 'Você foi descadastrado da lista de spam com sucesso!'
})