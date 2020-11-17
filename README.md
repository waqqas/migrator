# uripaserpp
C++ library too apply migrations to application database

Building library
---

- `mkdir build`
- `cd build`
- `cmake -DCMAKE_INSTALL_PREFIX:PATH=`pwd`/usr ..`
- `cmake --build . --config Release --target install -- -j $(nproc)`
