FROM gcc:7.5.0
COPY . /
WORKDIR /app
RUN g++ main.cpp -o main
EXPOSE 1337
CMD ["./main"]
