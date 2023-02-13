# Avrora_course

## Day 1

Реализован Echo Сервер, который в ответ отправляет предыдущее значение, которое было передано. Папка EchoServer.

Пример:

User: 2

Server: 

User: 5

Server: 2

User: abc

Server: 5

Классический EchoServer ( папка EchoServer(Usual) ) реализует отправку тех же значений, которые бвли переданы от пользователя.

Пример:

User: 2

Server: 2

User: 5

Server: 5

# Структура проекта для работы с QTcpServer

EchoServer.pro - профайл проекта;

main.cpp - основной файл исходных кодов;

mytcpserver.h - заголовочный файл сервера;

mytcpserver.cpp - файл исходных кодов сервера;
