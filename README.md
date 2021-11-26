# Voxel Terrain
Unreal Engine 4 procedural voxel terrian example (partially based on Transvoxel™ Algorithm by Eric Lengyel http://transvoxel.org/)
This plugin provides tools to generate, visualize and in-game change volume terrain using voxels.

**Master branch tested with Unreal Engine 4.27.1 [Windows 10]**
**Work in progress**

![Unreal Engine 4 voxel terrian](https://github.com/moichia/VoxelTerrain/blob/master/terrain.gif?raw=true)

![Grass](https://github.com/moichia/VoxelTerrain/blob/master/grass.gif?raw=true)

![Cave](https://github.com/moichia/VoxelTerrain/blob/master/cave.gif?raw=true)

# Playable demo
Download playable demo: [VoxelTerrain-0.0.14.zip](https://bit.ly/3xscMNh) 

# Features
* Runtime terrain modification
* Procedural landscape/caves generation
* Level of details (per chunk)
* Foliage
* Up to 65535 terrain materials
* Network multiplayer (experimental, WIP)

# Attention
* This project uses git submodules. Make sure that project are cloned properly and folder VoxelTerrain/Plugins is not empty.
* Work in progress. Some features is not finished/buggy/has ugly code/do not meet your expectations.

# Usage
1. Install MS Visual Studio 2019
2. Download last stable project 
3. Or clone repository properly ```git clone --recursive https://github.com/moichia/VoxelTerrain.git```
4. Open directory VoxelTerrain
5. Download [Content.zip](https://drive.google.com/file/d/1nBXoLTTpq92ENEfLSIoFxh2cTe1AVGJ3/view?usp=sharingi) (1.2Gb) and unzip it to ```Content``` folder
6. Open project file with Unreal Engine 4.27
7. Wait for compile UE4 KiteDemo shaders (first run may take long time)

# License
MIT license
