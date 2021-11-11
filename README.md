### Everything
This program is maked with https://dpp.dev.
It's a bot for logging almost every actions happenned on your Discord server.

### Build
For building it, please download at first a release of D++ (https://github.com/brainboxdotcc/DPP/releases/).
After that's good, clone this repository in src/ folder, and delete test.cpp for making tree like that:
```
-> /.circleci

-> /.github
-> /cmake
-> /docpages
-> /doxygen-awesome-css
-> /include
-> /src
  -> /src/Everything.cpp
  -> /src/LICENSE
  -> /src/README.md
  -> /src/dpp
-> /testdata
-> /win32
-> /.dockerignore 
-> ...```

And build it with the available documentation, https://dpp.dev/md_docpages_02_build.html

> Note: it can build with target `test`, try to run them twice if you changes don't work.