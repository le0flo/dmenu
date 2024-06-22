# 📱 Application launcher

Insieme al mio window manager personalizzato, utilizzo dmenu, un application launcher ideato da suckless software e modificato apposta per integrarsi con la mia personalizzazione di dwm

## Dipendenze

Lo script dmenu_drun necessita dell'applicazione dex per avviare i file .desktop, installala con il seguente comando.

```sh
sudo pacman -S dex
```

## Installazione

Per scaricare il codice, clona la repository con git.

```sh
git clone https://github.com/le0flo/dwm.git
```

Successivamente, entra nella repository scaricata ed esegui il seguente comando.

```sh
cd dmenu
sudo make clean install
```

# Problemi e domande

Se avete problemi, dubbi o domande in generale sul progetto, aprite una issue nella repository.
