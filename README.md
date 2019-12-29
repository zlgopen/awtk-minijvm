# AWTK-MINIJVM

[AWTK](https://github.com/zlgopen/awtk) 针对 [MINIJVM](https://github.com/digitalgust/miniJVM) 的适配。

## Download and Build


* Download and Build miniJVM

```
git clone https://github.com/digitalgust/miniJVM.git
mkdir build && cd build && cmake -DCOVERALLS=ON -DCMAKE_BUILD_TYPE=Debug ../minijvm/c && cmake --build . && cmake --build . --target mini_jvm
```

* Download awtk and awtk-minijvm

```
cd desktop
git clone https://github.com/zlgopen/awtk.git
git clone https://github.com/zlgopen/awtk-minijvm.git awtk_gui
```


* Build AWTK

```
cd awtk; scons; cd -
```

> AWTK的编译环境请参考：https://github.com/zlgopen/awtk


* Build AWTK-MINIJVM

```
cd awtk_gui
make
```

## Run

* on linux

```
./run_on_linux.sh
```

* on macos

```
./run_on_mac.sh
```






