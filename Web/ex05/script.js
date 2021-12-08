let idade = prompt('Digite sua idade: ')
idade = parseInt(idade)
div = idade / 2

console.log(`${idade} / 2 = ${div}`)
if (idade >= 18) {
    console.log('Maior de idade')
} else {
    console.log('Menor de idade')
}
