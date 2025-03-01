# Physics Engine Evaluation Lab (PEEL)

[![Build](https://github.com/physics-playground/PEEL/actions/workflows/build.yml/badge.svg)](https://github.com/physics-playground/PEEL/actions/workflows/build.yml)
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=physics-playground_PEEL&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=physics-playground_PEEL)
[![Lines of Code](https://sonarcloud.io/api/project_badges/measure?project=physics-playground_PEEL&metric=ncloc)](https://sonarcloud.io/summary/new_code?id=physics-playground_PEEL)

![PEEL Logo](./Media/peel.png)

PEEL was designed to evaluate, compare and benchmark physics engines.

This is a branch of [PEEL v2.0 PhysX Edition](https://github.com/Pierre-Terdiman/PEEL_PhysX_Edition) that was originally
focused on evaluating performance of NVIDIA PhysX. The original [PEEL v1.X](https://github.com/Pierre-Terdiman/PEEL) is
a separate repository that included support for more physics engines.

The modifications by [Joel Van Eenwyk](https://github.com/joelvaneenwyk) in this repository are focused on making it
easier to compile and run. Summary of changes:

1. [PhysX 4](https://github.com/NVIDIAGameWorks/PhysX) and [JoltPhysics](https://github.com/jrouwe/JoltPhysics) are both
   submodules that are compiled in as part of the main solution.
2. Added CMake settings for PEEL application and plugins.
3. Added configuration settings for [CLion](https://www.jetbrains.com/clion/) (`.idea`)
   and [VSCode](https://code.visualstudio.com/) (`.vscode`).
4. Added [CMake build GitHub action](https://github.com/physics-playground/PEEL/actions/workflows/build.yml).
5. Added [Sonar Cloud GitHub action](https://github.com/physics-playground/PEEL/actions/workflows/sonar-cloud.yml) to
   prevent regressions. See [Sonar Cloud - PEEL](https://sonarcloud.io/summary/overall?id=physics-playground_PEEL) for
   latest status.
6. Moved `PEEL` and `PEEL_Externals` sub-folders into root for less nesting.
7. Removed duplicate binaries (e.g., `glew32.dll`) and any binaries that we now build from source (e.g., those generated
   by PhysX). Note however that some of these binaries were custom-built so the version in this repository after
   building from source is expected to be different.

Windows is the only actively supported and tested platform. Development is primarily done with Visual Studio 2022 though
other versions of Visual Studio are supported through CMake.

For information about how to use the tool itself see [PEEL User Manual](./Docs/PEEL%20User%20Manual.md). Some
information is outdated, but it is still a useful reference.

## Setup

### Requirements

- Visual Studio 2022
- CMake v3.22+

### Steps

1. Clone [PEEL](https://github.com/physics-playground/peel) and include submodules.
2. Run `build.bat` in root to generate project files and build for VS2022.

Generated solution is available under `Build/x64_vs2022/PEEL.sln`

### Debugging

Command line arguments for doing a quick test with PhysX4 plugin:

`-p "PINT_PhysX4.dll" -s "Media/#Scripts/Highlights.Script.txt`

## Screenshots

### Dominoes

![Dominoes](./Media/Screenshots/Screenshot00.jpg?raw=true)

### CylinderStack

![CylinderStack](./Media/Screenshots/Screenshot01.jpg?raw=true)

### ThreeLegoGears

![ThreeLegoGears](./Media/Screenshots/Screenshot02.jpg?raw=true)

### SphericalJointNet

![SphericalJointNet](./Media/Screenshots/Screenshot03.jpg?raw=true)

### PortalScene2

![PortalScene2](./Media/Screenshots/Screenshot04.jpg?raw=true)

### ArticulatedChain_MCArticulation

![ArticulatedChain_MCArticulation](./Media/Screenshots/Screenshot05.jpg?raw=true)

### LegoExploding

![LegoExploding](./Media/Screenshots/Screenshot06.jpg?raw=true)

### ConvexGalore3

![ConvexGalore3](./Media/Screenshots/Screenshot07.jpg?raw=true)

### VoronoiFracture2

![VoronoiFracture2](./Media/Screenshots/Screenshot08.jpg?raw=true)

### VoronoiFracture5

![VoronoiFracture5](./Media/Screenshots/Screenshot09.jpg?raw=true)

### LegoSpeedChampions_DodgeChallenger

![LegoSpeedChampions_DodgeChallenger](./Media/Screenshots/Screenshot10.jpg?raw=true)

### LegoPolicePursuitTruck

![LegoPolicePursuitTruck](./Media/Screenshots/Screenshot11.jpg?raw=true)

### SceneConvexSweepVsStaticMeshes_TessBunny

![SceneConvexSweepVsStaticMeshes_TessBunny](./Media/Screenshots/Screenshot12.jpg?raw=true)

### LegoStaticMesh (1)

![LegoStaticMesh](./Media/Screenshots/Screenshot13.jpg?raw=true)

### LegoStaticMesh (2)

![LegoStaticMesh](./Media/Screenshots/Screenshot14.jpg?raw=true)

### SceneRaycastVsStaticMeshes_TessBunnyShort

![SceneRaycastVsStaticMeshes_TessBunnyShort](./Media/Screenshots/Screenshot15.jpg?raw=true)

### StaticMesh

![StaticMesh](./Media/Screenshots/Screenshot16.jpg?raw=true)

### CaterpillarTrack

![CaterpillarTrack](./Media/Screenshots/Screenshot17.jpg?raw=true)

### BulldozerTest

![BulldozerTest](./Media/Screenshots/Screenshot18.jpg?raw=true)

### ConvexCompoundChain

![ConvexCompoundChain](./Media/Screenshots/Screenshot19.jpg?raw=true)

### OverlapObjects_DynamicSpheres

![OverlapObjects_DynamicSpheres](./Media/Screenshots/Screenshot20.jpg?raw=true)
