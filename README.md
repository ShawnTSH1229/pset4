# pset4
Tiny Play Station4 Emulator

[<u>**PSET4 Development Blog: ELF Loader and Dynamic Linker.**</u>](https://shawntsh1229.github.io/2024/07/05/How-To-Develop-A-PlayStation-4-Emulator(1)/)

[<u>**PSET4 Development Blog: Graphics Driver And GPU Simulation.**</u>](https://shawntsh1229.github.io/2024/07/07/How-To-Develop-A-PlayStation-4-Emulator-2/)

# Overview

PSET4 is a tiny PlayStation 4 emulator. I wrote this project for **graphics driver** learning. There are many open source PS4 emulators, such as FPCS4 and GPCS4. These projects helped me greatly during PSET4 programming.  **Skelattack** is the only game I have tested. Other games are not guaranteed to run successfully. 

Our project consists of four parts. The first part is **load and parse the ELF**. PS4 uses an extended ELF format named **SELF (Signed Executable and Linkable Format)** to store the executable file. We convert SELF to ELF and parse it to get information about the game program, such as the symbols, used libraries and initial parameters. Then, we allocate virtual memory and load the modules into memory.

The second part is **dynamic link**. We have loaded the segment into memory. However, the memory address of the symbols using dynamic link have not been determined. We shall perform dynamic link for those symbols.

The third part is to **implement PS4's built-in libraries**. Some shared libraries are exclusive to PlayStation4, such as the libSceGnmDriver library and the libSceAudioOut library. Those libraries can't be loaded and parsed from the game's source code, since they are a built-in library in PlayStation4 and there is no need to pack them into the game source code. Therefore, we must implement these PS4's built-in libraries by ourselves.

The fourth part is graphics. AMD Graphics driver has four levels. The first level is **GNM application level**. This level is implemented by the game engine or the game developer. After that, the **user mode driver** translates the **GNM API** into **PM4 packets**. PM4 packets represent API commands in a way that GPUs can execute. The user mode driver library is PS4's built-in library. We have implemented a **custom GNM driver** to replace the built-in library. Then, Operating System gets the prepared command buffer from the user mode driver. Hands it over to the kernel mode driver. Finally, the kernel mode driver uses a **ring buffer** to **communicate** with the GPU. We implemented a command processor to **process PM4 packets** in order to simulate the kernel mode driver.

Our command processor is designed to **simulate setting GPU registers**. These GPU registers include user data registers, blend state registers, depth state registers etc.  And we have implemented an AMD ISA converter to **parse AMD ISA and translate it into Spirv**. Finally, with these GPU registers and spirv have been prepared, we translate them into **Vulkan API** and rendering the game.

## Getting Started

1.Cloning the repository with `https://github.com/ShawnTSH1229/pset4.git`.

2.Configuring the build

```shell
# Create a build directory
mkdir build
cd build

cmake -G "Visual Studio 17 2022" ../
```

3.Download the game (**Skelattack**) from this [<u>**website**</u>](https://dlpsgame.com/skelattack-ps4-pkg/). 

4.Unpack the game using [<u>**LibOrbisPkg**</u>](https://github.com/maxton/LibOrbisPkg)
<p align="center">
    <img src="/resource/rc.png" width="50%" height="50%">
</p>

5.Add Command line to the PSET4:

`-e H:\pset4\build\uroot\eboot.bin`

6.Run

result:
<p align="center">
    <img src="/resource/PS4Emulator.png" width="75%" height="75%">
</p>
