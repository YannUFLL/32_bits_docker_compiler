FROM i386/debian:latest

RUN apt update && \
    apt install -y build-essential gcc libc6-dev && \
    apt clean && rm -rf /var/lib/apt/lists/*
