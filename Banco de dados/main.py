from funcoes import *

while True:
    login = str(input('''[1] - Fazer login
[2] - Cadastrar
[3] - Deletar a conta
Digite sua opção: '''))
    while login not in '123':
        login = str(input('Por favor, digite uma opção valida: '))

    login = int(login)

    if login == 1:
        user = str(input('Usuario: ')).lower()
        senha = str(input('Senha: '))
        
        if logar(user, senha):
            break

        else:
            print('Usuario ou senha invalido.')
    
    if login == 2:
        user = str(input('Usuario: ')).lower()
        senha, confirm = str(input('Senha: ')), str(input('Confirme a senha: '))

        if senha != confirm:
            print('As senhas são diferentes.')
        
        elif len(user) > 16 or len(user) < 5:
            print('Digite um nome de usuario entre 5 e 16 caracteres.')

        else:
            print('Usuario cadastrado com sucesso')
            cadastrar(user, senha)
    
    if login == 3:
        user = str(input('Usuario: ')).lower()
        senha = str(input('Senha: '))

        if logar(user, senha):
            print('Conta deletada com sucesso!')
            deletar_conta(user)
            
        else:
            print('Usuario ou senha invalido.')

while True:
    print('-'*50)
    escolha = str(input('''[1] - Mostrar musicas
[2] - Criar uma playlist
[3] - Ver suas playlists
[4] - Adicionar musica na playlist
[5] - Remover musica da playlist
[6] - Renomear uma playlist
[7] - Deletar uma playlist
[8] - Sair do programa
Digite sua escolha: ''')).strip()

    while escolha not in '12345678':
        escolha = str(input('Digite uma opção valida: ')).strip()
    
    escolha = int(escolha)

    if escolha == 1:
        print('-'*100)
        print(f'{"ID": <3} | {"Nome da musica": <22} | {"Artista(s)": <35} | {"Data de lançamento"}')
        print('-'*100)
        mostrar_musicas()

    if escolha == 2:
        nome = str(input('Nome: '))
        criar_playlist(nome)
    
    if escolha == 3:
        print('-'*50)
        ver_playlist()
    
    if escolha == 4:
        id_playlist = str(input('ID da playlist: ')).strip()
        while not id_playlist.isnumeric():
            id_playlist = str(input('ID da playlist: ')).strip()

        while True:
            id_musica = str(input('ID da musica: ')).strip()
            while not id_musica.isnumeric():
                id_musica = str(input('ID da musica: ')).strip()

            id_playlist = int(id_playlist)
            id_musica = int(id_musica)

            if playlist_existe(id_playlist) and musica_existe(id_musica):
                adicionar_musica(id_playlist, id_musica)
                print('Musica adicionada com sucesso.')
            else:
                print('Musica ou playlist inexistente.')
                break

            confirm = str(input('Deseja continuar [S/N]? ')).lower().strip()[0]
            while confirm not in 'sn':
                confirm = str(input('Deseja continuar [S/N]? ')).lower().strip()[0]

            if confirm == 'n':
                break

    if escolha == 5:
        id_playlist = str(input('ID da playlist: ')).strip()
        while not id_playlist.isnumeric():
            id_playlist = str(input('ID da playlist: ')).strip()

        id_musica = str(input('ID da musica: ')).strip()
        while not id_musica.isnumeric():
            id_musica = str(input('ID da musica: ')).strip()

        id_playlist = int(id_playlist)
        id_musica = int(id_musica)

        if not musica_na_playlist(id_playlist, id_musica):
            print('A musica não esta na playlist.')

        elif playlist_existe(id_playlist) and musica_existe(id_musica):
            remover_musica(id_playlist, id_musica)
            print('Musica removida com sucesso.')

        else:
            print('Musica ou playlist inexistente.')
    
    if escolha == 6:
        id_playlist = str(input('ID da playlist: ')).strip()
        while not id_playlist.isnumeric():
            id_playlist = str(input('ID da playlist: ')).strip()

        nome = str(input('Novo nome: '))

        id_playlist = int(id_playlist)

        if playlist_existe(id_playlist):
            renomear_playlist(id_playlist, nome)
            print('Playlist renomeada com sucesso.')
        else:
            print('Playlist inexistente.')

    if escolha == 7:
        id_playlist = str(input('ID da playlist: ')).strip()
        while not id_playlist.isnumeric():
            id_playlist = str(input('ID da playlist: ')).strip()

        id_playlist = int(id_playlist)

        if playlist_existe(id_playlist):
            deletar_playlist(id_playlist)
            print('Playlist deletada com sucesso.')
        else:
            print('Playlist inexistente.')
    
    if escolha == 8:
        break
