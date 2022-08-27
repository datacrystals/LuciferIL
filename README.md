# LuciferIL
Wrapper for other various image libraries, allows for loading of as many formats as possible.

## Integration Instructions
Simply clone the repository and include it as a subdirectory within your own cmake project. Once you've done that, just link your target with Lucifer. (target_link_libraries). Below is a quick example snippit:
```
add_subdirectory(Third-Party/Lucifer) # Change this to fit where you put the Lucifer Directory

add_executable(Example Main.cpp)
target_link_libraries(Example Lucifer)
```
If you need some more examples, please see the ![Tests](Tests) folder. 
