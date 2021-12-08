let animes = [
    ['Naruto', 220, 20],
    ['Attack on titan', 75, 20],
    ['One piece', 981, 20],
    ['Death note', 37, 20],
    ['Sword art online', 73, 20]
]

escolha = prompt('Digite um anime')
qnt = prompt('Quantos episodios você ja assistiu?')

for (anime of animes) {
    if (anime.includes(escolha)) {
        tempo = anime[1] * anime[2]
        alert(`Você precisa de ${tempo/60} horas para terminar de assistir esse anime`)
        break
    } 
}