# Temp Control Mixed for C / CAmkES

## Build CAmkES + Sireum Docker Image

1. Install [Docker Desktop](https://www.docker.com/products/docker-desktop/)
2. Build the image via [bin/docker-setup.cmd](bin/docker-setup.cmd)
   ```
   cd sysmlv2-models/models/temp-control/sysml-temp-control-mixed-sel4-camkes
   ./bin/docker-setup.cmd
   ```

This adds a ``camkes.sireum`` image to your docker images.

## C Instructions

Rerun codegen targeting Linux
```bash
cd sysmlv2-models/models/temp-control/sysml-temp-control-mixed-sel4-camkes
./bin/run-hamr.cmd Linux
```

Compile/run the transpiled C project natively (requires cmake and a C compiler)

```bash
cd sysmlv2-models/models/temp-control/sysml-temp-control-mixed-sel4-camkes
./hamr/c/bin/compile.cmd
./hamr/c/bin/run.sh
```

Or, compile/run the transpiled C project via docker

```bash
cd sysmlv2-models/models/temp-control/sysml-temp-control-mixed-sel4-camkes
docker run --rm -it -w /root -v $(pwd):/root/sysml camkes.sireum sh -c \
    "sireum slang run /root/sysml/hamr/c/bin/compile.cmd && /root/sysml/hamr/c/bin/slang-build/Demo"
```

NOTE: remove the ``--rm`` option if you want to reuse the container.  Replace ``sh -c ...`` with ``bash`` if you want to enter an interactive shell.

## CAmkES Instructions


Rerun codegen targeting seL4
```bash
cd sysmlv2-models/models/temp-control/sysml-temp-control-mixed-sel4-camkes
./bin/run-hamr.cmd seL4

# add the missing stack size configuration entry for the temp control
./bin/fix-stacksize.cmd
```
Refer [here](TempControlMixedCamkes.sysml#L103) for more information regarding stack size.

Build and simulate the CAmkES image via docker

```bash
cd sysmlv2-models/models/temp-control/sysml-temp-control-mixed-sel4-camkes
docker run --rm -it -w /root -v $(pwd):/root/sysml camkes.sireum sh -c \
    "/root/sysml/hamr/camkes/bin/ run-camkes.sh -c /root/camkes -s"
```

