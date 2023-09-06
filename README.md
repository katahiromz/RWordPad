# ![](img/wordpad-32x32.png) Independent ReactOS WordPad

This is `"Independent ReactOS WordPad"` from [ReactOS](https://reactos.org/).

![(The screenshot)](img/screenshot.gif)

It's a free and open source software for Windows XP and later.

<p align=center>
  <a href="https://reactos.org/">
    <img alt="ReactOS" src="https://reactos.org/sites/default/files/ReactOS_0.png">
  </a>
</p>

<p align=center>
  <a href="https://reactos.org/donate/">
    <img alt="Donate" src="https://img.shields.io/badge/%24-donate-E44E4A.svg">
  </a>
  <a href="https://twitter.com/reactos">
    <img alt="Follow on Twitter" src="https://img.shields.io/twitter/follow/reactos.svg?style=social&label=Follow%20%40reactos">
  </a>
</p>

## Main code contributors

- Copyright 1993-2023 the Wine project authors
- Copyright ReactOS Development Team
- Copyright 2004 Krzysztof Foltman
- Copyright 2007 Alexander N. Sørnes <alex@thehandofagony.com>
- Copyright 2007-2008 Alexander N. Sørnes <alex@thehandofagony.com>
- Copyright 2010 Dylan Smith <dylan.ah.smith@gmail.com>
- Copyright 2020 Katayama Hirofumi MZ <katayama.hirofumi.mz@gmail.com>
- and more!

## Translators

- Copyright 2004 Krzysztof Foltman
- Copyright 2006 Andras Kovacs
- Copyright 2006 Fatih Aşıcı (fasici [at] linux-sevenler [dot] org)
- Copyright 2006 Hans Leidekker
- Copyright 2006 Henning Gerhardt
- Copyright 2006 Mikolaj Zalewski
- Copyright 2006 Phil Krylov
- Copyright 2006,2007 YunSong Hwang
- Copyright 2006-2009 Jonathan Ernst
- Copyright 2006-2010 Alexander N. Sørnes <alex@thehandofagony.com>
- Copyright 2008 Frans Kool
- Copyright 2008 Hongbo Ni <hongbo.at.njstar.com>
- Copyright 2008 Jens Albretsen <jens@albretsen.dk>
- Copyright 2008 Katayama Hirofumi MZ
- Copyright 2008 Ricardo Filipe
- Copyright 2008 Rok Mandeljc
- Copyright 2009 Anders Jonsson
- Copyright 2009 Aurimas Fišeras <aurimas@gmail.com>
- Copyright 2010 Cheer Xiao <xiaqqaix.at.gmail.com>
- Copyright 2010 Claudia Cotună
- Copyright 2010 Frédéric Delanoy
- Copyright 2010 Gustavo Henrique Milaré
- Copyright 2010 Igor Paliychuk
- Copyright 2010 Luca Bennati
- Copyright 2010 Thomas Larsen
- Copyright 2010 Łukasz Wojniłowicz
- Copyright 2011 Ștefan Fulea
- Copyright 2013-2016, 2019 Erdem Ersoy (eersoy93) (erdemersoy [at] erdemersoy [dot] net)
- Copyright 2014 Ismael Ferreras Morezuelas
- Copyright 2017 Li Keqing <auroracloud4096.at.gmail.com>
- Copyright 2020 Tibor Lajos Füzi
- Copyright 2020-2021 Chan Chilung <eason066.at.gmail.com>
- Copyright Ardit Dani
- Copyright Michael Stefaniuc
- and more!

## How to build?

Please use ReactOS Build Environment (RosBE).

```bash
git clone https://github.com/katahiromz/RWordPad
cd RWordPad
cmake -G Ninja -DCMAKE_BUILD_TYPE=Release .
ninja
strip wordpad.exe
```

Tested on RosBE, Visual Studio 2015, and Visual Studio 2019.

## License

- LGPL 2.1 and later
