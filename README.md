# Notice

The original m5stack-avatar version is frozen at v0.10.0. I created a version that reflects AquesTalk ESP32 2.4.4 (2024/10/30), so I'll share it here.

# M5Stack-Avatar

[![Powered By PlatformIO](https://img.shields.io/badge/powered-PlatformIO-brightgreen)](https://platformio.org/)
[![Build Status](https://travis-ci.com/meganetaaan/m5stack-avatar.svg?branch=master)](https://travis-ci.com/meganetaaan/m5stack-avatar)

![M5Stack-Avatar](docs/image/avatar.gif)

Video: https://www.youtube.com/watch?v=C1Hj9kfY5qc

[日本語](README_ja.md)

## Features

* :neutral_face:     Draw avatar face
* :smile:            Expression(Happy, Angry, Sad etc.)
* :smiley_cat:       Customize face
* :kiss:             Lip sync
* :art:              Color Palette
* :arrows_clockwise: Move, Zoom and Rotation
* :two:              Compatible with M5Stack Core2

## Installation

### Prerequisites

1. The following three boards are supported:
  - m5stack-core (m5stack Basic)
  - m5stack-core2 (m5stack core2)
  - (provisional) m5stack-cores3 (m5stack coreS3) *No buttons implemented.

2. Development environment
  - platformIO & vscode
  - m1 mac

## Usage

1. Clone this repository in the platformIO project directory
1. Open the cloned local repository folder in platformIO
1. Make sure to match the default_env in the platformio.ini file to the m5stack you are using
  - For m5stack basic, use m5stack-core
  - For m5stack core2, use m5stack-core2

```
[platformio]
default_envs = m5stack-core2
```

4. Since we created main.cpp by referring to the talk.ino file in the `examples/talk` directory, we should be able to build/deploy it for now.
