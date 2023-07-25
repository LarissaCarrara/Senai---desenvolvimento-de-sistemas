DROP DATABASE IF EXISTS restaurante;
CREATE DATABASE restaurante;
use restaurante;

CREATE TABLE cliente(
    cpf INT NOT NULL PRIMARY KEY,
    nome VARCHAR(30) NOT NULL,
    logradouro VARCHAR(30) NOT NULL,
    complemento VARCHAR(30),
    bairro VARCHAR(30) NOT NULL
);

CREATE TABLE telefone(
    cpf_telefone INT NOT NULL,
    telefone VARCHAR(15) NOT NULL,
    FOREIGN KEY(cpf_telefone) REFERENCES cliente(cpf)
)
CREATE TABLE pedidos(
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    cliente_cpf INT NOT NULL,
    nome VARCHAR(30) NOT NULL,
    total DECIMAL(4,2).
    qtd INT NOT NULL,
    status VARCHAR(10) NOT NULL,
    FOREIGN KEY(cliente_cpf) REFERENCES cliente(cpf)
);

CREATE TABLE cardapio(
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    preco DECIMAL(5,2),
    descricao VARCHAR(15)
);

CREATE TABLE item_pedido(
    id_pedido INT NOT NULL,
    id_cardapio INT NOT NULL,  
    qtd INT NOT NULL,
    FOREIGN KEY(id_pedido) REFERENCES pedidos(id),
    FOREIGN KEY(id_item) REFERENCES cardapio(id_cardapio)
);

CREATE TABLE motoboy(
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(30) NOT NULL
)