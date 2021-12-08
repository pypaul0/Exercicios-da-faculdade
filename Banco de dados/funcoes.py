import mysql.connector

try:
    mydb = mysql.connector.connect(
        host='localhost',
        user='root',
        password='',
        database='faculdade'
    )
except:
    print('Não foi possivel conectar ao banco de dados.')
    quit()

cursor = mydb.cursor()


def logar(user, senha):
    cursor.execute('SELECT id_usuario, username, senha FROM usuario;')
    res = cursor.fetchall()

    for i, u, s in res:
        if user == u and senha == s:
            global id_user
            id_user = i

            return True
    return False


def cadastrar(user, senha):
    cursor.execute('SELECT username, senha FROM usuario;')
    res = cursor.fetchall()

    for u in res:
        if user == u[0]:
            print('Este usuario ja existe.')
            return

    cursor.execute(f'INSERT INTO usuario VALUES (default, "{user}", "{senha}")')
    mydb.commit()


def deletar_conta(user):
    cursor.execute(f'''delete from usuario
where username = "{user}"
limit 1;''')


def mostrar_musicas():
    cursor.execute('''select musica.nome, artista.nome, musica.data_de_lancamento
from artista
join feat
on feat.id_artista = artista.id_artista
right join musica
on feat.id_musica = musica.id_musica;''')
    res = cursor.fetchall()
    
    lista = list()
    obj = dict()

    for pos, dado in enumerate(res):
        if pos == 0:
            musica = obj.copy()
            musica['nome'] = dado[0]
            musica['artista'] = list()
            musica['artista'].append(dado[1])
            musica['data'] = dado[2]
            lista.append(musica)
        
        elif musica['nome'] != dado[0]:
            musica = obj.copy()
            musica['nome'] = dado[0]
            musica['artista'] = list()
            musica['artista'].append(dado[1])
            musica['data'] = dado[2]
            lista.append(musica)
        
        else:
            musica['artista'].append(dado[1])
    
    for pos, dic in enumerate(lista):
        nome, artista, data = dic.values()
        print(f'{pos+1: >2}. | {nome:<22} | {", ".join(artista):35} | {data}')


def criar_playlist(nome):
    cursor.execute(f'''insert into playlist values (default, "{nome}", {id_user});''')
    print('Playlist criada com sucesso!')
    mydb.commit()


def renomear_playlist(id_playlist, nome):
    cursor.execute(f'''select playlist.nome from usuario
join playlist
on playlist.id_usuario = usuario.id_usuario
where usuario.id_usuario = {id_user};''')
    playlist = list()
    res = cursor.fetchall()

    for p in res:
        playlist.append(p[0])

    nome_playlist = playlist[id_playlist - 1]
    cursor.execute(f'''update playlist
set nome = "{nome}"
where nome = "{nome_playlist}" and playlist.id_usuario = {id_user};''')
    mydb.commit()


def deletar_playlist(id_playlist):
    cursor.execute(f'''select playlist.nome from usuario
join playlist
on playlist.id_usuario = usuario.id_usuario
where usuario.id_usuario = {id_user};''')
    playlist = list()
    res = cursor.fetchall()

    for p in res:
        playlist.append(p[0])

    nome_playlist = playlist[id_playlist - 1]
    cursor.execute(f'''delete from playlist
where nome = "{nome_playlist}" and id_usuario = {id_user}
limit 1;''')
    mydb.commit()


def ver_playlist():
    cursor.execute(f'''select playlist.nome from usuario
join playlist
on playlist.id_usuario = usuario.id_usuario
where usuario.id_usuario = {id_user};''')
    res = cursor.fetchall()
    lista = list()

    for p in res:
        playlist = dict()
        playlist['nome'] = p[0]
        playlist['musicas'] = list()
        lista.append(playlist)
 
    cursor.execute(f'''select playlist.nome, musica.nome from usuario
join playlist
on playlist.id_usuario = usuario.id_usuario
join adicionar
on adicionar.id_playlist = playlist.id_playlist
join musica
on musica.id_musica = adicionar.id_musica
where usuario.id_usuario = {id_user};''')
    res = cursor.fetchall()
    
    for n in lista:
        for m in res:
            if n['nome'] == m[0]:
                n['musicas'].append(m[1])

    for pos, pl in enumerate(lista):
        print(f'{pos+1: >2}. | {pl["nome"]}')
        for pos, musica in enumerate(pl['musicas']):
            print(f'   {pos+1: >2}. | {musica}')


def adicionar_musica(id_playlist, id_musica):
    cursor.execute(f'''select playlist.nome
from usuario
join playlist
on playlist.id_usuario = usuario.id_usuario
where usuario.id_usuario = {id_user};''')
    
    playlist = ''
    musica = ''

    for pos, item in enumerate(cursor.fetchall()):
        if id_playlist == pos+1:
            playlist = item[0]
    
    cursor.execute(f'''select distinct nome from musica;''')

    for pos, item in enumerate(cursor.fetchall()):
        if id_musica == pos+1:
            musica = item[0]
    
    cursor.execute(f'''select id_playlist from playlist
where nome = "{playlist}";''')

    id_playlist = cursor.fetchall()[0][0]

    cursor.execute(f'''select id_musica from musica
where nome = "{musica}";''')

    id_musica = cursor.fetchall()[0][0]

    cursor.execute(f'''insert into adicionar values ({id_playlist}, {id_musica});''')
    mydb.commit()


def remover_musica(id_playlist, id_musica):
    cursor.execute(f'''select playlist.nome
from usuario
join playlist
on playlist.id_usuario = usuario.id_usuario
where usuario.id_usuario = {id_user};''')
    
    playlist = ''
    musica = ''

    for pos, item in enumerate(cursor.fetchall()):
        if id_playlist == pos+1:
            playlist = item[0]
    
    cursor.execute(f'''select distinct nome from musica;;''')

    for pos, item in enumerate(cursor.fetchall()):
        if id_musica == pos+1:
            musica = item[0]
    
    cursor.execute(f'''select id_playlist from playlist
where nome = "{playlist}";''')

    id_playlist = cursor.fetchall()[0][0]

    cursor.execute(f'''select id_musica from musica
where nome = "{musica}";''')

    id_musica = cursor.fetchall()[0][0]
    
    cursor.execute(f'''delete from adicionar
where id_playlist = {id_playlist} and id_musica = {id_musica}
limit 1;''')
    mydb.commit()


def playlist_existe(id):
    cursor.execute(f'''select playlist.nome
from usuario
join playlist
on playlist.id_usuario = usuario.id_usuario
where usuario.id_usuario = {id_user};''')
    res = cursor.fetchall()
    
    for pos, item in enumerate(res):
        if id == pos+1:
            return True
    return False


def musica_existe(id):
    cursor.execute('''select nome from musica''')
    res = cursor.fetchall()

    for pos, item in enumerate(res):
        if pos+1 == id:
            return True
    return False


def musica_na_playlist(id_playlist, id_musica):
    cursor.execute(f'''select playlist.nome
from usuario
join playlist
on playlist.id_usuario = usuario.id_usuario
where usuario.id_usuario = {id_user};''')
    
    playlist = ''
    musica = ''

    for pos, item in enumerate(cursor.fetchall()):
        if id_playlist == pos+1:
            playlist = item[0]
    
    cursor.execute(f'''select distinct nome from musica;;''')

    for pos, item in enumerate(cursor.fetchall()):
        if id_musica == pos+1:
            musica = item[0]
    
    cursor.execute(f'''select musica.id_musica from usuario
join playlist 
on playlist.id_usuario = usuario.id_usuario
join adicionar
on adicionar.id_playlist = playlist.id_playlist
join musica
on musica.id_musica = adicionar.id_musica
where playlist.nome = "{playlist}"  and usuario.id_usuario = {id_user} and musica.nome = "{musica}";''')

    if cursor.fetchall():
        return True
    return False
