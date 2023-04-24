# Use a Debian-based Linux distribution as the base image
FROM debian:buster

# Set the working directory to /app
WORKDIR /app

# Install the required dependencies
RUN apt-get update && \
    apt-get install -y gcc make scons wine-dev wine64-development libc6-dev-i386 && \
    rm -rf /var/lib/apt/lists/*
    
