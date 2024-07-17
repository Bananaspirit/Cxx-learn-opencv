# Use the official Ubuntu image
FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive

# Set the working directory
WORKDIR /app

# Install dependencies
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    libopencv-dev \
    && rm -rf /var/lib/apt/lists/*

# Copy the current directory contents into the container at /app
COPY . /app

# Build the application
RUN mkdir -p build

WORKDIR /app/build

RUN cmake .. && make

# Command to run the executable
CMD ["./CLO"]