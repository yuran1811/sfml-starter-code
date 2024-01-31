# SFML Starter Code

## A starter code template of SFML Application

### Folder structure

```
.
├── bin				# Folder contains binary files (exe, dll,...)
│  └── *.dll		# Dynamic link library files (SFML,...)
│
├── docs
├── include
├── libs
│
├── public			# Public files (fonts, icons, images,...)
│  ├── fonts
│  ├── icons
│  └── images
│
├── resources		# External libs (SFML,...)
│
├── src
│  ├── components	# Shared components,...
│  ├── core
│  ├── interface
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

### References

- [**Refs**](./docs/refs.md)
