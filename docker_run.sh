# Allow X server connections from local root
xhost +local:docker

# build image
# docker build -t cxx_learn_opencv .

# run container
docker run --rm -it --name learn-opencv \
    -e DISPLAY=$DISPLAY \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    -v ./:/app \
    cxx_learn_opencv \
    /bin/bash -c "cd build && cmake .. && make && ./CLO"

# Revoke X server access
xhost -local:docker