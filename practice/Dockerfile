FROM golang:1.20.0

WORKDIR /app

RUN apt-get update && apt-get install git
RUN go install golang.org/x/tools/gopls@latest

COPY go.mod go.sum ./
RUN go mod download
RUN go mod tidy

COPY ./ ./

RUN CGO_ENABLED=0 GOOS=linux go build -o /algorithm-practice

EXPOSE 8000

CMD [ "/algorithm-practice" ]
