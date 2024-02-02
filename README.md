# SFML Starter Code

## A starter code template of SFML Application

### Folder structure

```
.
├── bin			# Folder contains binary files (exe, dll,...)
│  └── *.dll		# Dynamic link library files (SFML,...)
│
├── docs
│  └── refs.md
│
├── include
│  └── SFML		# SFML header files
│
├── libs
│
├── public
│  ├── fonts
│  ├── icons
│  ├── images
│  ├── logs
│  ├── sounds
│  └── textures
│
├── resources
│  └── SFML-2.6.1
│
├── src
│  ├── components	# Shared components,...
│  ├── core
│  │  ├── App.cpp
│  │  └── App.hpp
│  ├── interface	# Shared uis,...
│  ├── shared		# Shared constants,...
│  ├── utils		# Shared functions
│  ├── main.cpp
│  └── main.hpp
│
├── .gitignore
├── LICENSE
├── Makefile
└── README.md
```

### Installation

#### Step 1: Install GCC and setup environment

- Go to [**Win Libs**](https://winlibs.com/).
- Scroll down to "Release versions" and download the right version of GCC for SFML (this project use GCC 13.1.0 and SFML 2.6.1)
- Add to `PATH` for running globally

#### Step 2: Launch the project

- Go to `<path_to_gcc>/bin`
- Duplicate the file `mingw32-make.exe` and rename it to `make.exe`
- Open up the terminal and type `make run`

### Documentations

- [**Refs**](./docs/refs.md)
