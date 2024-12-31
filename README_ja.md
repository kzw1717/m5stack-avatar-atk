## お知らせ

fork元のm5stack-avatarがv0.10.0で凍結となってます。
[AquesTalk ESP32	2.4.4 (2024/10/30)](https://www.a-quest.com/products/aquestalk_esp32.html)を反映したバージョンを作ったのでこちらに共有しておきます。

# M5Stack-Avatar

[![Powered By PlatformIO](https://img.shields.io/badge/powered-PlatformIO-brightgreen)](https://platformio.org/)
[![Build Status](https://travis-ci.com/meganetaaan/m5stack-avatar.svg?branch=master)](https://travis-ci.com/meganetaaan/m5stack-avatar)

![M5Stack-Avatar](docs/image/avatar.gif)

動画: https://www.youtube.com/watch?v=C1Hj9kfY5qc

[ENGLISH](README.md)

## 機能

* :neutral_face:     アバターの顔を表示します。
* :smile:            表情を変えられます(喜び, 怒り, 悲しみ など)。
* :smiley_cat:       アバターの顔を独自にカスタマイズできます。
* :kiss:             リップシンク（音声に合わせて口を動かす）できます。
* :art:              色を変更できます。
* :arrows_clockwise: 顔を移動、拡大、回転できます。
* :two:              M5Stack Core2に対応。

## インストール

### 前提

- 対象boardは次の3つ
  - m5stack-core（m5stack Basic）
  - m5stack-core2(m5stack core2）
  - m5stack-cores3(m5stack coreS3) 
  - - [gob/gob_unifiedButton](https://github.com/GOB52/gob_unifiedButton)を使ってタッチボタンを実装

- 開発環境
  - platformIO　& vscode
  - m1 mac

## 使い方

- platformIOのプロジェクト用ディレクトリで本リポジトリをcloneする
- cloneしたローカルリポジトリのフォルダをplatformIOで開く
- platformio.iniファイルにあるdefault_envを使用するm5stackに合わせる
  - m5stack basicの場合は、m5stack-core
  - m5stack core2の場合は、m5stack-core2
  - m5stack cores3の場合は、m5stack-cores3

```
[platformio]
default_envs = m5stack-core2
```

- `examples/talk`ディレクトリ内のtalk.inoファイルを参考にmain.cppを作成しているので、とりあえずbuild/deployができるはずです。
