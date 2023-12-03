# SFML Starter Code

## A starter template of SFML Application

### App structure

```
.
├── .vscode
├── docs 				# Document files
├── public 				# Public files (images, icons,...)
│  ├── icons
│  └── images
├── resources 			# External libs (SFML,...)
├── src
│  ├── components		# Shared components,...
│  ├── shared			# Shared constants,...
│  ├── types			# Shared struct, class,...
│  ├── utils			# Shared functions
│  └── App.hpp			# App header file
├── main.cpp
├── Makefile
├── LICENSE
├── README.md
└── *.dll
```

### Installation

#### Step 1: Install GCC and setup environment

- Go to [**Win Libs**](https://winlibs.com/) and scroll down to "Release versions"
- Download the right version of GCC for SFML (this project use GCC 13.1.0 and SFML 2.6.1)
- Add to PATH for running globally

#### Step 2: Run locally

- Go to `<path_to_gcc>/bin`
- Duplicate the file `mingw32-make.exe` and rename it to `make.exe`
- Open up the terminal and type `make run`

### References

- [**Refs**](./docs/refs.md)
