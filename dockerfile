# Use a Debian-based Linux distribution as the base image
FROM debian:buster

# Set the working directory to /app
WORKDIR /app

# Install the required dependencies
RUN apt-get update && \
    apt-get install -y gcc make scons wine-dev wine64-development libc6-dev-i386 && \
    rm -rf /var/lib/apt/lists/*

# Download the NSIS source code and extract it
ADD http://prdownloads.sourceforge.net/nsis/nsis-3.06.1-src.tar.bz2 /app/
RUN tar xvfj nsis-3.06.1-src.tar.bz2 && \
    rm nsis-3.06.1-src.tar.bz2

# Copy your adaptations to the NSIS source code
COPY your_code.c /app/nsis-3.06.1-src/your_code.c

# Build NSIS
WORKDIR /app/nsis-3.06.1-src/makensis
RUN scons PREFIX=/usr/local install

# Set the entry point to the NSIS executable
ENTRYPOINT ["/usr/local/bin/makensis"]
