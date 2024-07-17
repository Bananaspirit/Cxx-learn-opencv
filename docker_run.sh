# Allow X server connections from local root
xhost +local:docker

# build image
docker build -t cxx_learn_opencv .

# run container
docker run --rm -it \
    -e DISPLAY=$DISPLAY \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    cxx_learn_opencv

# Revoke X server access
xhost -local:docker