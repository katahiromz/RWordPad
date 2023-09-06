#!/usr/bin/env bash

cp -fr ../reactos/base/applications/wordpad/lang/ .
cp -fr ../reactos/base/applications/wordpad/res/ .
cp -fr ../reactos/base/applications/wordpad/*.c .
cp -fr ../reactos/base/applications/wordpad/*.h .
cp -fr ../reactos/base/applications/wordpad/*.rc .
cp -fr ../reactos/output-MinGW-i386/sdk/include/reactos/version.h reactos/
cp -fr ../reactos/output-MinGW-i386/sdk/include/reactos/buildno.h reactos/
