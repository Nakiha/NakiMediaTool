# how to compile
## notice
if you did not build ffmpeg, return to upper folder read compile.md to compile ffmpeg libs

## compile
~~~shell
mkdir build
cd build
cmake ..
ninja
~~~

## how to run demo
after compile
~~~shell
cd build
export PATH="$(realpath ../../build/ffmpeg_build/bin):$PATH"
./hello_binary.exe
~~~